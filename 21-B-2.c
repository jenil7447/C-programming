#include <stdio.h>
#include <string.h>

void writeData(char* str)
{
    FILE* fp;

    //Write data into a file.
    fp = fopen("includehelp.txt", "w");
    if (fp == NULL)
        return;

    fwrite(str, 1, strlen(str), fp);
    fclose(fp);
}

void readData(char* str)
{
    FILE* fp;

    char ch = 0;
    int cnt = 0;

    fp = fopen("includehelp.txt", "r");
    if (fp == NULL)
        return;

    ch = fgetc(fp);
    while (ch != EOF) {
        str[cnt++] = ch;
        ch = fgetc(fp);
    }
    str[cnt] = 0;
    fclose(fp);
}

int main()
{
    char wrtStr[32] = "this is india";
    char readStr[32];

    int flg = 1;
    int cnt = 0;

    writeData(wrtStr);
    readData(readStr);

    while (readStr[cnt] != 0) {
        if (flg == 1 && readStr[cnt] != 0x20) {
            readStr[cnt] = readStr[cnt] - 32;
            flg = 0;
        }

        if (readStr[cnt] == 0x20 && flg == 0)
            flg = 1;

        cnt++;
    }

    writeData(readStr);

    memset(readStr, 0x00, sizeof(readStr));
    readData(readStr);

    printf("Original data from file: %s\n", wrtStr);
    printf("Update data from file: %s\n", readStr);

    return 0;
}
