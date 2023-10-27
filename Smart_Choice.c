#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int a=(500-2*x)+(1000-4*(x+y));
    int b=(1000-4*y)+(500-2*(x+y));
    if (a>b)
    printf("%d",a);
    else
    printf("%d",b);
}