#include<stdio.h>
int main()
{
    char s[100];
    scanf("%[^
]",&s);
    int i,count=0;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {count++;}
    }
    printf("%d",count);
}