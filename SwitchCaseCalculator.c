#include<stdio.h>
void main()
{

	int a,b;
	char c;

	printf("Enter first integer : \n");
	scanf("%d",&a);
	printf("Enter second integer : \n");
	scanf("%d",&b);
	printf("Enter an operation : + for add , - for sub , * for mul , / for div \n");
	scanf(" %c",&c);
	switch(c)
	{
			case '+':
			printf("Sum is %d",a+b);
			break;
			case '-':
			printf("Difference is %d",a-b);
			break;
			case '*':
			printf("Product is %d",a*b);
			break;
			case '/':
			printf("Quotient is %d",a/b);
			break;
			default:
				printf("Enter a valid Operator");
				break;

	}
}
