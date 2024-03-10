#include<stdio.h>
void main()
{
    float a,b,c;
    printf("Enter side 1 of triangle :");
    scanf("%f",&a);
    printf("Enter side 2 of triangle :");
    scanf("%f",&b);
    printf("Enter side 3 of triangle :");
    scanf("%f",&c);
    if((c*c == (a*a + b*b)) || (a*a == (b*b + c*c)) || (b*b == (a*a + c*c)))
    {
        printf("Triangle is right-angled \n");
    }
    if((a == c) && (b == c) && (a == b))
    {
        printf("Triangle is equilateral \n");
    }
    if(((a==b)&&(a!=c))||((a==c)&&(b!=c))|| ((b==c)&&(a!=c)))
    {
        printf("Triangle is iscosceles \n");
    }
    if((a != b) && (a != c) && (b != c))
    {
        printf("Triangle is scalene \n");
    }
}
