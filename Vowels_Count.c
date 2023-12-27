#include<stdio.h>
int main()
{
    char str[101];
    scanf("%[^
]",&str);
    int i,count=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        count++;
    }
    printf("%d",count);
}