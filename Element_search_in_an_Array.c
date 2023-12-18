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
    int s,c=0;
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(s==arr[i])
        c++;
    }
    if(c>=1)
    printf("True");
    else
    printf("False");
}