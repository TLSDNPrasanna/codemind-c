#include<stdio.h>
int main()
{
    int n,i,dp=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        dp=dp*i;
    }
    printf("%d",dp);
}