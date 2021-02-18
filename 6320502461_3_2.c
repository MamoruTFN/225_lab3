#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    if(n>=1&&n<10000)
    {
        int a[n],b[n],max=0,p=0;

        for (i=0; i<n; i++)
        {
            scanf("%d %d",&a[i],&b[i]);
        }


        for (i=0; i<n; i++)
        {
            if(a[i]>=1&&a[i]<48&&b[i]>=1&&b[i]<50000)
            {
                if(a[i]==a[i+1])
                {
                    b[i]+=b[i+1];
                }
                if(b[i]>max)
                {
                    max=b[i];
                    p=i+1;
                }
            }

        }


        printf("%d %d",p,max);
    }

    return 0;
}
