#include<stdio.h>
int main()
{
   float x,y;
   scanf("%d%d",&x,&y);
   printf("%.2f",(x-y)/x*100);
}