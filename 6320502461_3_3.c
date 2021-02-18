#include<stdio.h>
int main()
{
    int k;
    scanf("%d",&k);
    if(k==1)
    {
        printf("%d\n",k);
    }
    else
    {
        for (int i=2; k>1;)
    {
        if(k%i==0)
        {
            k=k/i;
            printf("%d\n",i);
        }
        else
        {
            i++;
        }
    }
    }
    printf("%d",0);


    return 0;
}
