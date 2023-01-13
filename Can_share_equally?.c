#include<stdio.h>
int main()
{
    int x,y,t;
    scanf("%d%d",&x,&y);
    t=(x*1)+(y*2);
    if (t%2!=0)
    {
        printf("NO");
    }
    else if (x%2!=0 && y==0)
    {
        printf("NO");
    }
    else if (y%2!=0 && x==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
}