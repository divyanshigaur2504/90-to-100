/*Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to reverse a word in place
void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    
    str[strcspn(str, "\n")] = '\0';

    char *wordStart = NULL;
    for (int i = 0; i <= strlen(str); i++) {
        if (wordStart == NULL && !isspace(str[i]) && str[i] != '\0') {
            
            wordStart = &str[i];
        }
        if ((isspace(str[i]) || str[i] == '\0') && wordStart != NULL) {
      
            reverseWord(wordStart, &str[i - 1]);
            wordStart = NULL;
        }
    }

    printf("Output: %s\n", str);
    return 0;
}
