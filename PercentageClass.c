#include <stdio.h>

void main()
{
    int math,physics,english,chemistry,computer;
    float percentage;
    printf("Enter marks of maths : ");
    scanf("%d",&math);
    printf("Enter marks of physics : ");
    scanf("%d",&physics);
    printf("Enter marks of english : ");
    scanf("%d",&english);
    printf("Enter marks of chemistry : ");
    scanf("%d",&chemistry);
    printf("Enter marks of computer : ");
    scanf("%d",&computer);
    percentage = (math+physics+english+chemistry+computer)/(float)5;
    if(percentage<=35)
    {
        printf("Fail Class");
    }
    if(percentage<=45 && percentage>36)
    {
        printf("Pass Class");
    }
    if(percentage>46 && percentage<=60)
    {
        printf("Second Class");
    }
    if(percentage>=61 && percentage<70)
    {
        printf("First Class");
    }
    if(percentage>70)
    {
        printf("Distinction");
    }
}
