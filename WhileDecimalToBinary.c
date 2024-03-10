#include <stdio.h>
void main()
{
    int n, c=31, k;

    printf("Enter an integer in decimal number system\n");
    scanf("%d", &n);

    printf("%d in binary number system is:\n", n);

    while(c >= 0)
    {
        k = n >> c;
        if (k & 1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    c--;
    }

    printf("\n");
}
