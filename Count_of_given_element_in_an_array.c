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
    int count=0;
    int f;
    scanf("%d",&f);
    for(i=0;i<n;i++)
    {
    if(f==arr[i])
    {
     count++;   
    }
    }
    printf("%d",count);
}