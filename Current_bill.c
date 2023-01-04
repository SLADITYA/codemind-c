#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    scanf("%f",&a);
    b=(a*1.20)+100;
    c=(a*1.50)+100;
    d=(a*1.80)+((a*1.80)*0.15)+100;
    e=(a*2.00)+((a*2.00)*0.15);
    if(a<200)
    {
        printf("%.2f",b);
    }
    else if(a>=200&&a<400)
    {
        printf("%.2f",c);
    }
    else if(a>=400&&a<600)
    {
        printf("%.2f",d);
    }
    else if(a>600)
    {
        printf("%.2f",e);
    }
}