#include<stdio.h>
int main()
{
    float bas,hra,da,pf,gr;
    scanf("%f%f%f",&bas,&hra,&da);
    pf=0.12*bas;
    gr=bas+hra+da+pf;
    printf("%.2f
%.2f",pf,gr);
}