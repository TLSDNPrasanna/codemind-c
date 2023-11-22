#include<stdio.h>
int main()
{
    int a,b,m,i,g;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        m=a*i;
        if(m%b==0)
        {
            g=a*b/m;
            break;
        }
    }
    printf("%d",g);
}