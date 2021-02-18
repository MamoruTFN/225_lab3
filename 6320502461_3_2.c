#include<stdio.h>

int main()
{
    unsigned int n;
    scanf("%u",&n);
    unsigned int a[n],b[n],max=0,p;
    for (int i=0; i<n; i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    for (int i=0;i<n;i++)
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
    printf("%d %d",p,max);



    return 0;
}
