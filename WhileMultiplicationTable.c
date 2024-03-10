#include<stdio.h>
void main()
{
	int i=1,n;
	printf("Enter the Number for Multiplication Table : ");
	scanf("%d",&n);
	printf("Multiplication  Table : \n");
	while(i<=10)
	{
		printf("%d x %d = %d \n",i,n,i*n);
		i++;
	}
}
