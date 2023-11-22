#include<stdio.h>
int main()
{
    int n,count=2;
    scanf("%d",&n);
    int a=0,b=1,c=a+b;
    printf("%d %d ",a,b);
    while(count<n)
    {
        c=a+b;
        printf("%d ",c);
        count++;
        a=b;
        b=c;
    }
}