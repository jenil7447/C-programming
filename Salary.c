#include<stdio.h>
void main()
{
    float da,hra,basic,gross;
    printf("Enter basic salary of employee : ");
    scanf("%f",&basic);
    if(basic>=10000 && basic<20000)
    {
        da = basic*(0.80);
        hra = basic*(0.20);
    }
    else if(basic<30000 && basic>=20000)
    {
        da = basic*(0.90);
        hra = basic*(0.25);
    }
    else if(basic>=30000)
    {
        da = basic*(0.95);
        hra = basic*(0.30);
    }
    gross = basic + da + hra;
    printf("Gross Income = %f",gross);
    
}
