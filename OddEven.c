#include<stdio.h>
void main()
{
	int a;
	printf("Enter value of an integer : ");
	scanf("%d",&a);
	if(a%2 == 0)
	{
		printf("Entered number is even");
	}
	else
	{
		printf("Entered number is odd");
	}
}
