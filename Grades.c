#include<stdio.h>
int main()
{
    float p,c,b,m,cs,a;
    scanf("%f%f%f%f%f",&p,&c,&b,&m,&cs);
    a=(p+c+b+m+cs)/500*100;
    if (a>=90)printf("Grade A");
    else if (a>=80)printf("Grade B");
    else if (a>=70)printf("Grade C");
    else if (a>=60)printf("Grade D");
    else if (a>=40)printf("Grade E");
    else printf("Grade F");
}