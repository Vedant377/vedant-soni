# include <stdio.h>
#include <string.h>
int main() {
    char str[100], reversed[100];
    printf("Enter a string to reverse:\n");
    scanf("%s", str);
    strrev(str);
    strcpy(reversed, str);
    printf("Reversed string: %s\n", reversed);
    return 0;
} 