#include<stdio.h>
int main()
{
    int n,r,s,ds=0;
    scanf("%d",&n);
    r=n*n;
    while(r!=0)
    {
       s=r%10;
       ds=ds+s;
       r=r/10;
    }
    if(ds==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}