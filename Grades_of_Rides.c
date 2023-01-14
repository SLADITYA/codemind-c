#include<stdio.h>
int main()
{
    int hf,spf,vf;
    scanf("%d%d%d",&hf,&spf,&vf);
    if(hf>50 && spf>60 && vf>100)
    printf("10");
    else if(hf>50 && spf>60 && vf<100)
    printf("9");
    else if(hf<50 && spf>60 && vf>100)
    printf("8");
    else if(hf>50 && spf<60 && vf>100)
    printf("7");
    else if(hf>50 && spf<60 && vf<100)
    printf("6");
    else if(hf<50 && spf>60 && vf<100)
    printf("6");
    else if(hf<50 && spf<60 && vf>100)
    printf("6");
    else
    printf("5");
}