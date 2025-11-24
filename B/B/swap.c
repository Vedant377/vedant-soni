#include <stdio.h>

int main() {
    int a, b, x;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    x = a;//code read from a to x (right to left) a is the value of x
    a = b;// b is the value of a
    b = x;// x is the value of b
    printf("After swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);
    return 0;
}