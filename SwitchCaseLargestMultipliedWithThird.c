#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter first integer : ");
    scanf("%d",&a);
    printf("Enter second integer : ");
    scanf("%d",&b);
    printf("Enter third and smallest integer : ");
    scanf("%d",&c);
    switch((a>b)&&(a>c))
    {   
        case 1:
        printf("Answer is %d",a*c);
        break;
        
    }
    switch((b>c)&& (b>a))
    {
        case 1:
        printf("Answer is %d",b*c);
        break;
        
    }

    
}
