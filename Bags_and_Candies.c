#include<stdio.h>
int main()
{
    int n,k,m;
    scanf("%d%d%d",&n,&k,&m);
    float p=n%(k*m);
    if (p==0)
    printf("%d",n/(k*m));
    else 
    printf("%d",n/(k*m)+1);
}