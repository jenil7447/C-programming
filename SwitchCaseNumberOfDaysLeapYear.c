#include<stdio.h>
void main()
{
    int days;
    printf("Enter the number of month in a year in (1-12) : ");
    scanf("%d",&days);
    switch(days)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("31 days");
        break;
        case 2:
        printf("29 days");
        break;
        default:
        printf("30 days");
        break;
        
    }
}
