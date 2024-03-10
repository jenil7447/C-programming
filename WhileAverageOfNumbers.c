#include <stdio.h>

void main()
{
    float avg,n,i=1,sum=0,num;
    printf("How many numbers do you want to enter : ");
    scanf("%f",&n);
    while(i<=n)
    {
        printf("Enter Number : ");
        scanf("%f",&num);
        sum = sum + num;
        i++;
    }
    avg = sum/n;
    printf("Average = %f",avg);
}
