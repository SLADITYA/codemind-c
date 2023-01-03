#include<stdio.h>
int main()
{
    char alph;
    scanf("%c",&alph);
    if(alph>='A' && alph<='Z')
    printf("uppercase alphabet");
    else if(alph>='a' && alph<='z')
    printf("lowercase alphabet");
    else
    printf("not an alphabet");
}