#include<stdio.h>
int main()
{
    float A,B,X,Y;
    scanf("%f%f%f%f",&A,&B,&X,&Y);
    float P=A/X;
    float Q=B/Y;
    if (P>Q)
    printf("Jesse");
    else if (Q>P)
    printf("Walter");
    else 
    printf("Both");
}