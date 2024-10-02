#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int lineCount = 0;

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            lineCount++;
        }
    }

    fclose(file);

    printf("Number of lines in the file: %d\n", lineCount);

    return 0;
}
