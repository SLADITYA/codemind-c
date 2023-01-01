#include<stdio.h>
int main()
{
    float a,b,h,ar;
    scanf("%f%f%f",&a,&b,&h);
    ar=0.5*h*(a+b);
    printf("%.4f",ar);
}