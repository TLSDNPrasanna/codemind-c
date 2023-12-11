#include<stdio.h>
#include<math.h>
int main()
{
    int n,ss=0,ds=0,i;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        ds=ds+i;
        ss=ss+(i*i);
    }
    if(ds*ds< ss)
    printf("%d",ss-ds*ds);
    else
    printf("%d",ds*ds-ss);
}