#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int p[48]={0},x=0,y=0,max=0,pr=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d %d",&x,&y);
        p[x-1]+=y;
    }
    for (int i=0;i<48;i++)
    {

        if(p[i]>max)
        {
            max=p[i];
            pr=i+1;
        }

    }
    printf("%d %d",pr,max);

    return 0;
}
