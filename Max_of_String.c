#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]",&str);
    char max=str[0];
    int i;
    for(i=0;str[i]!=NULL;i++)
    {
        if(max<str[i])
        max=str[i];
    }
    printf("%c",max);
}