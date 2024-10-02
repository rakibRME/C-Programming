#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

void findLongestWord(FILE *file) {
    char word[MAX_LENGTH];
    char longestWord[MAX_LENGTH] = "";
    int maxLength = 0;

    while (fscanf(file, "%s", word) != EOF) {
        int currentLength = strlen(word);
        if (currentLength > maxLength) {
            maxLength = currentLength;
            strcpy(longestWord, word);
        }
    }

    printf("Longest word: %s\n", longestWord);
}

int main() {
    FILE *file;
    char filename[100];

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    findLongestWord(file);

    fclose(file);

    return 0;
}
