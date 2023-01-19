#include<stdio.h>
int main()
{
    int i,n,j,sum=0;
    scanf("%d",&n);
    j=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        { 
         sum=sum+i;
        }
    }
    if(sum==j)
    printf("True");
    else
    printf("False");
}