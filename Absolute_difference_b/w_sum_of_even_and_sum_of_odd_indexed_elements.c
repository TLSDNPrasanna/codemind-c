#include<stdio.h>
int main()
{
    int arr[7],n,i,ec=0,oc=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if (i%2==0)
        {
            ec=ec+arr[i];
        }
        else
        {
            oc=oc+arr[i];
        }
    }
    if(oc<ec)
    printf("%d",ec-oc);
    else
    printf("%d",oc-ec);
}