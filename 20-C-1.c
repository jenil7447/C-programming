#include<stdio.h>
struct s
{
    int feet;
    int inches;
}d1,d2,d3;
void main()
{
    int feet,inches;
    printf("\nEnter value of distance 1 in feet : ");
    scanf("%d",&d1.feet);
    printf("\nEnter value of distance 2 in feet : ");
    scanf("%d",&d2.feet);
    printf("\nEnter value of distance 1 in inches : ");
    scanf("%d",&d1.inches);
    printf("\nEnter value of distance 2 in inches : ");
    scanf("%d",&d2.inches);
    d3.feet = d1.feet + d2.feet;
    d3.inches = d1.inches + d2.inches;
    printf("Sum in feet = %d",d3.feet);
    printf("\nSum in inches = %d",d3.inches);
}

