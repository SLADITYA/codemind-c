#include<stdio.h>
int main()
{
    int n,k,x,y,am;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    if(x<=y)
    {
        am=n*x;
        printf("%d",am);
    }
    else
    {
        am=((k*x)+(n-k)*y);
        printf("%d",am);
    }
    
}