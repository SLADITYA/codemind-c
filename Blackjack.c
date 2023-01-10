#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    if(a+b>11)
    printf("%d",21-(a+b));
    else if(a+b==11)
    printf("%d",10);
    else
    printf("-1");
}