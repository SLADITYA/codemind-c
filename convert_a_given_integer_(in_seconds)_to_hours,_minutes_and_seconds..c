#include<stdio.h>
int main()
{ 
    int tim,sec,min,hrs; 
    scanf("%d",&tim); 
    hrs=tim/3600; 
    min=(tim%3600)/60; 
    sec=tim%60; 
    printf("H:M:S-%d:%d:%d",hrs,min,sec);
    
}