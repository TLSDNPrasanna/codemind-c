#include<stdio.h>
void digits_are(int a,int b)
{
    int sum=0;
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
        sum=sum+i;
    }
    
    if(b==sum)
    printf("Amicable");
    else
    printf("Not Amicable");
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    digits_are(a,b);
}