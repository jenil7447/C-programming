#include<stdio.h>
void main()
{
    float principle,roi,time_period,SI;
    printf("Enter value of principle : ");
    scanf("%f",&principle);
    printf("Enter value of rate of interest : ");
    scanf("%f",&roi);
    printf("Enter value of time period : ");
    scanf("%f",&time_period);
    SI = ((principle*roi*time_period)/100);
    printf("Simple Interest = %f",SI);
}
