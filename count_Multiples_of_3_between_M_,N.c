#include<stdio.h>
int main()
{
    int m,n,i,mult=0;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i%3==0)
        mult++;
    }
    printf("%d",mult);
}