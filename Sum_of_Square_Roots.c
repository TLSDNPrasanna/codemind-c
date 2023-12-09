#include<stdio.h>
#include<math.h>
int main()
{
    float i,a,b,s;
    float sum=0;
    scanf("%f%f",&a,&b);
    for (i=a;i<=b;i++)
    {
        s=sqrt(i);
        sum=sum+s;
    }
  printf("%.2f",sum);
}