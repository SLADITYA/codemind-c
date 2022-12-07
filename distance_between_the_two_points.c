#include<stdio.h>
#include<math.h>
int main()
{ 
    float a,b,c,d,dist;
    scanf("%f%f%f%f",&a,&b,&c,&d); 
    dist=pow((a-c)*(a-c)+(b-d)*(b-d),0.5); 
    printf("%.4f",dist);
    
}