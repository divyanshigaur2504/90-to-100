/*Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

  #include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int seen[26] = {0};  
    int found = 0;

    printf("Enter a string: ");
    scanf("%s", str); 

    for (int i = 0; i < strlen(str); i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {   
            if (seen[ch - 'a'] == 1) {
                printf("First repeating lowercase alphabet: %c\n", ch);
                found = 1;
                break;
            } else {
                seen[ch - 'a'] = 1;
            }
        }
    }

    if (!found) {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}
