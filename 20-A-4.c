#include<stdio.h>
struct student
{
   char name[20];
   float percentage;
   int age;
};
void main()
{
    int i;
  struct student s[5];
  for(i=0;i<5;i++)
  { 
      printf("\nStudent %d : ",i+1);
      printf("\nEnter Name : ");
      scanf("%s",s[i].name);
      printf("\nEnter Percentage : ");
      scanf("%f",&s[i].percentage);
      printf("\nEnter Age : ");
      scanf("%d",&s[i].age);
  }
    for(i=0;i<5;i++)
  { 
      printf("\nStudent %d : ",i+1);
      printf("\nName = %s ",s[i].name);
      printf("\nPercentage = %f ",s[i].percentage);
      printf("\nAge = %d ",s[i].age);
  }
}
