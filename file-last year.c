#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    int numbers[5];
    int i;
    int sum = 0;
    float average;

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "rb");

    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    fseek(file, -5 * sizeof(int), SEEK_END);

    fread(numbers, sizeof(int), 5, file);

    fclose(file);

    for (i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    average = (float) sum / 5;

    printf("Average of the last five numbers: %.2f\n", average);

    return 0;
}
