#include <stdio.h>
#include <string.h>

int countWords(char str[]) {
   int length = strlen(str);
   int i, count = 1;

   for (i = 0; i < length; i++) {
      if (str[i] == ' ')
         count++;
   }

   return count;
}

int main() {
   char str[1000];

   printf("Enter a string: ");
   gets(str);

   int wordCount = countWords(str);

   printf("Number of words: %d\n", wordCount);

   return 0;
}
