#include<stdio.h>
int main()
{
    int arr[7],n,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==1)
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
}