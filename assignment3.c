#include<stdio.h>
//Q1.
/*
int main()
{
    char a;
    printf("Enter a charecter :");
    scanf("%c",&a);
    printf("Ascii code of %c = %d",a , a);
    return 0;
}

//Q2.
int main()
{
    int  a;
    printf("Enter a ascii code :");
    scanf("%d",&a);
    printf("Ascii code of %d = %c",a , a);
    return 0;
}

//Q3.
int main()
{
    char  a , b ,c;
    printf("Enter three charecters  :");
    scanf("%c%c%c",&a,&b,&c);
    printf("Ascii code of %c %c %c=%d %d %d ",a,b,c,a,b,c);
    return 0;
}

//Q4
int main()
{
    int  a;
    printf("Enter a number :");
    scanf("%d",&a);
    int lastDigit = a%10;
    printf("Last digit of a number = %d",lastDigit);
    return 0;
}
*/
//Q5.
int main()
{
    int  a;
    printf("Enter a number :");
    scanf("%d",&a);
    int lastDigit = a/10;
    printf("without last digit of a given number = %d",lastDigit);
    return 0;
}