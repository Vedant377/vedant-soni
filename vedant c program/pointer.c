#include <stdio.h>

int main() {
    int a, b, temp;
    int *p = &a, *q = &b;

    printf("Enter first number: ");
    scanf("%d", p);
    printf("Enter second number: ");
    scanf("%d", q);

    temp = *p;
    *p = *q;
    *q = temp;

    printf("After swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);

    return 0;
}