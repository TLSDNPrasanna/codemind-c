#include<stdio.h>
int main()
{
    int r,n,ds=0,dp=1;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        ds=ds+r;
        dp=dp*r;
        n=n/10;
        
    }
    if (dp==ds)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}