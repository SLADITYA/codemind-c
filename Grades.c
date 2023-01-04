#include<stdio.h>
int main()
{
    int avg,phy,chem,bio,math,comp;
    scanf("%d%d%d%d%d",&phy,&chem,&bio,&math,&comp);
    avg=(phy+chem+bio+math+comp)/5;
    if(avg>=90)
    {
        printf("Grade A");
    }
    else if(avg>=80)
    {
        printf("Grade B");
    }
    else if(avg>=70)
    {
        printf("Grade C");
    }
    else if(avg>=60)
    {
        printf("Grade D");
    }
    else if(avg>=40)
    {
        printf("Grade E");
    }
    else if(avg<40)
    {
        printf("Grade F");
    }
}