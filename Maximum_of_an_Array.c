#include<stdio.h>
int main()
{
    int arr[10],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>arr[0])
        {
            arr[0]=arr[i];
        }
    }
    printf("%d",arr[0]);
}