#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    int avg=sum/n,c=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>=avg)
        c++;
    }
    printf("%d",c);
    
}