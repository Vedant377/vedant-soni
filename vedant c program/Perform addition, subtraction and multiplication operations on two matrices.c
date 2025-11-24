#include <stdio.h>
#include <string.h>


int main() {
    char name[100];
    char *ptr = name;
    int i, len, last_space = -1;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character if present
    len = strlen(name);
    if (name[len - 1] == '\n')
        name[len - 1] = '\0';

    // Find position of last space
    for (i = 0; *(ptr + i) != '\0'; i++) {
        if (*(ptr + i) == ' ')
            last_space = i;
    }

    // Print abbreviations for first and middle names
    printf("Abbreviated name: ");
    for (i = 0; *(ptr + i) != '\0'; i++) {
        // If it's first letter of word and not in last name
        if (i == 0 || (*(ptr + i - 1) == ' ')) {
            if (i < last_space)
                printf("%c. ", *(ptr + i));  // abbreviation
            else {
                printf("%s", ptr + i);  // print full last name
                break;
            }
        }
    }

    printf("\n");
    return 0;
}