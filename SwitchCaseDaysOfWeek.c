#include<stdio.h>
void main()
{
	int a;
	printf("Enter a number from (0 - 6) to print day name of week : ");
	scanf("%d",&a);
	switch(a)
	{
		case 0:
			printf("Monday");
			break;
			case 1:
			printf("Tueday");
			break;
			case 2:
			printf("Wednesday");
			break;
			case 3:
			printf("Thursday");
			break;
			case 4:
			printf("Friday");
			break;
			case 5:
			printf("Saturday");
			break;
			case 6:
			printf("Sunday");
			break;
			default:
				printf("Entered value is invalid value");
				break;
	}
}
