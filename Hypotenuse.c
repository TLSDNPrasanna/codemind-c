#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    float c;
    scanf("%d%d%d",&a,&b,&c);
    c=sqrt(pow(a,2)+pow(b,2));
    printf("%.2f",c);
}