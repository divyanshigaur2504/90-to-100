/*Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char longest[200] = "";
    char word[200];
    int maxLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    // Tokenize the string by spaces
    char *token = strtok(str, " ");
    while (token != NULL) {
        int len = strlen(token);
        if (len > maxLen) {
            maxLen = len;
            strcpy(longest, token);
        }
        token = strtok(NULL, " ");
    }

    printf("Longest word: %s\n", longest);

    return 0;
}
