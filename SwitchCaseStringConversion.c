#include <stdio.h>
#include <stdlib.h>
void main()
{
    char input[50];
    int choice;

    printf("Enter a number as a string: ");
    scanf("%s", input);

    printf("Choose conversion:\n");
    printf("1. String to Integer\n");
    printf("2. String to Float\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) 
    {
        case 1: 
        {
            int converted_int = atoi(input);
            printf("Converted Integer: %d\n", converted_int);
            break;
        }
        case 2: 
        {
            float converted_float = atof(input);
            printf("Converted Float: %f\n", converted_float);
            break;
        }
        default:
            printf("Invalid choice entered.\n");
    }

}
