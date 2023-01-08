#include<stdio.h>
int main()
{
    int n,m,i,c,a;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {
        if(n%i==0 && m%i==0)
        c=i;
    }
        a=n*m/c;
        printf("%d",a);
    
}