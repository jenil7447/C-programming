#include<stdio.h>
void SI(float,float,float);
void main()
{
    float p,r,t;
    printf("Enter Principle Amount: ");
    scanf("%f",&p);
    printf("Enter Rate of Interest : ");
    scanf("%f",&r);
    printf("Enter Time Period : ");
    scanf("%f",&t);
    SI(p,r,t);
}
void SI(float p,float r,float t)
{
    printf("Simple Interest = %f",(p*r*t)/100.0);
}

