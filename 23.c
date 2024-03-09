#include<stdio.h>
void main()
{
    int i,n;
    char s[50];
    printf("Enter a string with stars : ");
    gets(s);
    printf("Enter a number of star which you want to remove : ");
    scanf("%d",&n);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i] == '*')
        {
            s[i] = ' ';
        }
        
    }
    s[n-1] = ' ';
    for(i=0;s[i]!=' ';i++)
    {
    }
    s[i-1] = ' ';
    printf("String  = %s",s);
}
