include<stdlib.h>

int main()
{
    FILE *pointer1, *pointer2, *pointer3;
    char source1[80],source2[80],target[80];
    char ch1,ch2;

    printf("Enter the source and source 2\n");
    scanf("%s %s", source1,source2);

    printf("Enter the destination\n");
    scanf("%s",target);

    pointer1 = fopen(source1,"r");
    pointer2 = fopen(source2,"r");
    pointer3 = fopen(target,"w");

    if(pointer1 == NULL || pointer2==NULL || pointer3==NULL)
    {
        printf("Cannot open a file\n ");
        exit(1);
    }
    

    while(1)
    {
        if(ch1!=EOF)
        {
            ch1 = fgetc(pointer1);
            while(ch1!='\n')
            {
                if(ch1==EOF)
                    break;
                fputc(ch1,pointer3);
                ch1=fgetc(pointer1);
            }
        }
        if(ch2!=EOF)
        {
            ch2=fgetc(pointer2);
            while(ch2!='\n')
            {
                if(ch2==EOF)
                    break;
                fputc(ch2,pointer3);
                ch2=fgetc(pointer2);
            }
        }

        if(ch1==EOF && ch2==EOF)
            break;
    }

    printf("Merging completed successfully\n");
    printf("Press any key to exit\n");
    getch();
}
