#include<stdio.h>
int main()
{
    char str[101];
    scanf("%[^
]",&str);
    int i,count=0;
    for(i=0;str[i]!=NULL;i++)
    {
        count++;
    }
    printf("%d",count);
}