#include<stdio.h>
int main()
{
    char alph;
    scanf("%c",&alph);
    if(alph=='A'||alph=='E'||alph=='I'||alph=='O'||alph=='U')
    printf("VOWEL");
    else if(alph=='a'||alph=='e'||alph=='i'||alph=='o'||alph=='u')
    printf("VOWEL");
    else
    printf("CONSONANT");
}