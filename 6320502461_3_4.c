#include<stdio.h>
int main()
{
    unsigned long long a,i;
    int q;
    scanf("%llu",&a);
    for(a;a>=0;a--)
    {
        q=1;
        for(i=2;i<a;i++)
        {
            if(a%i==0)
            {
                q=0;
                break;
            }
        }
        if(q==1)
        {
            printf("%llu",a);
            break;
        }

    }
    return 0;
}
