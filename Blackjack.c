#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d",&x,&y);
    z=21-(x+y);
    printf("%d",z<=10?z:-1);
}