#include<stdio.h>
void main()
{
    int i,*c;
    char s1[100];
    printf("Enter a string : ");
    scanf("%s",s1);
    for(i=0;s1[i]!='\0';)
    {
        i++;
    }
    c = &i;
    printf("Length of String = %d",*c);
}
