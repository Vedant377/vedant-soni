#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j, len, last_space;
    char name[100];
    char *ptr;

    printf("Enter number of individuals: ");
    scanf("%d", &n);
    getchar(); // to consume the newline after scanf

    printf("\n");

    for (i = 0; i < n; i++) {
        printf("Enter full name of person %d: ", i + 1);
        fgets(name, sizeof(name), stdin);

        // Remove newline if present
        len = strlen(name);
        if (name[len - 1] == '\n')
            name[len - 1] = '\0';

        ptr = name;
        last_space = -1;

        // Find position of last space
        for (j = 0; *(ptr + j) != '\0'; j++) {
            if (*(ptr + j) == ' ')
                last_space = j;
        }

        printf("Abbreviated name: ");

        // Print abbreviations for all but last name
        for (j = 0; *(ptr + j) != '\0'; j++) {
            if (j == 0 || *(ptr + j - 1) == ' ') {
                if (j < last_space)
                    printf("%c. ", *(ptr + j));  // print first letter + dot
                else {
                    printf("%s", ptr + j);  // print last name in full
                    break;
                }
            }
        }

        printf("\n\n");
    }

    return 0;
}
