#include<stdio.h>
int main()
{
    int N,K,X,Y;
    scanf("%d%d%d%d",&N,&K,&X,&Y);
    if (X<Y)
    printf("%d",K*X+(N-K)*X);
    else 
    printf("%d",K*X+(N-K)*Y);
}