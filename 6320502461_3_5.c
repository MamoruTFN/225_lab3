#include<stdio.h>

int main()
{
    int l,a=1,n=0;
    scanf("%d",&l);
    int k=l;
    for (int i=2;k>1;i++)
    {
        if(k%i==0)
        {
            if(a==i)
            {
                break;
            }
            k/=i;
            a=i;
            i=1;
            n++;
        }
    }
    if(n==3)
    {
        printf("%d is a Lucky Number.",l);
    }
    else
    {
        printf("%d is not a Lucky Number.",l);
    }
    return 0;
}
