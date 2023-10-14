#include<stdio.h>
int main()
{
    float u;
    scanf("%f",&u);
    if(u<199)
    printf("%.2f",1.20*u+100);
    else if(u>=200 && u<400)
    printf("%.2f",1.50*u+100);
    else if(u>=400 && u<600)
    printf("%.2f",1.80*u+1.80*u*0.15);
    else
    printf("%.2f",2.00*u+2.00*u*0.15);
}