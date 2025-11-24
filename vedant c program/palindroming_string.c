# include <stdio.h>
#include <string.h>
int main() {
    char str[100], reversed[100];
    printf("Enter a string to check its palindrome:\n");
    scanf("%s", str);
    strcpy(reversed, str);
    strrev(reversed);
    if(strcmp(str, reversed) == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
} 