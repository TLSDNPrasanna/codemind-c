#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
        ch=='A'||ch=='I'||ch=='E'||ch=='O'||ch=='U')
    printf("VOWEL");
    else
    printf("CONSONANT");
}