/*Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>

int isRotation(char str1[], char str2[]) {
    
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }

    
    char temp[200];
    strcpy(temp, str1);
    strcat(temp, str1);

    
    if (strstr(temp, str2) != NULL) {
        return 1;
    }
    return 0;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    if (isRotation(str1, str2)) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }

    return 0;
}
