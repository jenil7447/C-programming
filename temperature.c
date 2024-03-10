#include<stdio.h>
void main()
{
    float f,c;
    printf("Enter value of Fahrenheit : ");
    scanf("%f",&f);
    c = (((f-32)*5.0)/9.0);
    printf("Celsius = %f",c);
    
}
