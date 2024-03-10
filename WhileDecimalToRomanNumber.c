#include <stdio.h>
void main()
{
    int dec;
    printf("Enter a Decimal value : ");
    scanf("%d",&dec);
    printf("Roman Numeral = ");
    while(dec!=0)
    {
        if(dec>=1000)
        {
            printf("M");
            dec-=1000;
        }
        else if(dec>=900)
        {
            printf("C");
            dec-=900;
        }
        else if(dec>=500)
        {
            printf("L");
            dec-=500;
        }
        else if(dec>=400)
        {
            printf("XL");
            dec-=400;
        }
        else if(dec>=100)
        {
            printf("C");
            dec-=100;
        }
        else if(dec>=90)
        {
            printf("XC");
            dec-=90;
        }
        else if(dec>=50)
        {
            printf("L");
            dec-=50;
        }
        else if(dec>=40)
        {
            printf("Xl");
            dec-=40;
        }
        else if(dec>=10)
        {
            printf("X");
            dec-=10;
        }
        else if(dec>=9)
        {
            printf("IX");
            dec-=9;
        }
        else if(dec>=5)
        {
            printf("V");
            dec-=5;
        }
        else if(dec>=4)
        {
            printf("IV");
            dec-=4;
        }
        else if(dec>=1)
        {
            printf("I");
            dec-=1;
        }
    }
}
