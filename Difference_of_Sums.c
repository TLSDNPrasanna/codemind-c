#include<stdio.h>
int main()
{
    int n,i,ds=0,ss=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        ds=ds+i;
        ss=ss+(i*i);
    }
    printf("%d",(ds*ds)-ss);
}