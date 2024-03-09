#include<stdio.h>
void main()
{
   FILE *p;
   char ch;
    int count_line=0,count_tab=0,count_spaces=0,count_chars=0;
    
   p = fopen("file.txt","r");
   ch = getc(p);
    while(ch!=EOF)
    {
        if(ch == '\n')
        {
            count_line++;
        }
        else if(ch == '\t')
        {
            count_tab++;
        }
        else if(ch == ' ')
        {
            count_spaces++;
        }
        else
        {
            count_chars++;
            ch = getc(p);
        }
    }
   printf("\nLines = %d\nCharacters = %d\nSpaces = %d\nTabs = %d",count_line,count_chars,count_spaces,count_tab);
   fclose(p);
}
