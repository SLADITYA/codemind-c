#include<stdio.h>
int main()
{
    int l,b,w,c,ar,tc;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    ar=((l+2*w)*(b+2*w)-l*b);
    tc=ar*c;
    printf("%d",tc);
}