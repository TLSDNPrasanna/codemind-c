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
    int avg=sum/n,e=0;
    for(i=0;i<n;i++)
    {
        if(avg==arr[i])
        e++;
    }
    if(e!=0)
    printf("True");
    else
    printf("False");
}