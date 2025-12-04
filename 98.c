/*Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[200];
    char *token;
    char lastName[100];
    char initials[200] = "";

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);


    name[strcspn(name, "\n")] = '\0';

    
    token = strtok(name, " ");
    while (token != NULL) 
        
        strcpy(lastName, token);
        token = strtok(NULL, " ");
    }

    
    token = strtok(name, " ");
    while (token != NULL) {
        if (strcmp(token, lastName) != 0) {
          
            char ch = toupper(token[0]);
            strncat(initials, &ch, 1);
            strcat(initials, ".");
        }
        token = strtok(NULL, " ");
    }

  
    printf("Output: %s %s\n", initials, lastName);

    return 0;
}
