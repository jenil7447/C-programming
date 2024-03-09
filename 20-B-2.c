#include<stdio.h>
struct struct1
{
   int i;
   
}s1;
struct struct2
{
   int j;
   struct struct1 i;
}s2;
void main()
{
   printf("Enter an integer : ");
   scanf("%d",&s2.i);
   printf("Integer = %d",s2.i);
}
