#include<stdio.h>
int main()
{
    int n,ds=0;
    scanf("%d",&n);
    while(n>0)
    {
        ds++;
        n=n/10;
    }
    printf("%d",ds);
}