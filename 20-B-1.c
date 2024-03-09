#include<stdio.h>
struct name_struct
{
   int j;
};
void main()
{
    int n,i;
    struct name_struct *ptr,s;
    ptr = &s;
    printf("Enter an integer : ");
    scanf("%d",&ptr->j);
    printf("\nInteger = %d",ptr->j);
}
