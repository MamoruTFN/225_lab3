#include<stdio.h>

int main()
{
    int s,win=0,max=0,p;
    for(int i=1;i<6;i++)
    {
        s=0;
        for(int j=0;j<4;j++)
        {
            scanf("%d",&p);
            s+=p;
        }
        if(s>max)
        {
            max=s;
            win=i;

        }
    }
    printf("%d %d",win,max);

    return 0;
}
