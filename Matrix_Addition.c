#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int a[m][n],b[m][n];
    int i,j;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int p,q;
    scanf("%d%d",&p,&q);
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("
");
    }
}