#include<stdio.h>
int main()
{
    float s;
    scanf("%f",&s);
    if (s<=10000)
    printf("%.2f",s+0.8*s+0.2*s);
    else if (s<=20000)
    printf("%.2f",s+0.9*s+0.25*s);
    else 
    printf("%.2f",s+0.95*s+0.3*s);
    
}