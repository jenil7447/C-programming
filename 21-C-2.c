#include <stdio.h>
#include <stdlib.h>
void main() 
{
    FILE *file = fopen("your_file.txt", "r");
    FILE *tempFile = fopen("temp.txt", "w");

    if (file == NULL || tempFile == NULL) {
        perror("Error opening file");
        return 1;
    }

    char line[256];
    int lineCount = 0;

    while (fgets(line, sizeof(line), file) != NULL) {
        // Remove blank lines
        if (line[0] != '\n') {
            fprintf(tempFile, "%s", line);
            lineCount++;

            // Insert a blank line after the third line
            if (lineCount == 3) {
                fprintf(tempFile, "\n");
            }
        }
    }

    fclose(file);
    fclose(tempFile);

    // Rename the temp file to the original file
    remove("your_file.txt");
    rename("temp.txt", "your_file.txt");
}
