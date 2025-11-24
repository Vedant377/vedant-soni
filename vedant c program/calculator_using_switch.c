# include <stdio.h>
int main() {
    int a, b, choice;
    printf("You have to choose:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &choice);

    if (choice < 1 || choice > 4) {
        printf("You entered a wrong choice.\n");
        return 1; 
    }

    printf("Enter two integer numbers:\n");
    scanf("%d %d", &a, &b);

    switch (choice) {
        case 1:
            printf("Addition of %d and %d is %d\n", a, b, (a + b));
            break;
        case 2:
            printf("Subtraction of %d and %d is %d\n", a, b, (a - b));
            break;
        case 3:
            printf("Multiplication of %d and %d is %d\n", a, b, (a * b));
            break;
        case 4:
            if (b != 0) {
                printf("Division of %d by %d is %d\n", a, b, (a / b));
            } else {
                printf("Number cannot be divided by 0.\n");
            }
            break;
    }

    return 0;
}

    