#include <stdio.h>
int factorial(int a); 
int main() {
    int a;
    printf("Enter a number to calculate its factorial:\n");
    scanf("%d", &a);
    int result = factorial(a);
    printf("Factorial of %d is %d\n", a, result);
    return 0;
}
int factorial(int a) {
    if (a == 0 || a == 1) {
        return 1; 
    } else {
        return a * factorial(a - 1); 
        printf("facotrial of %d",factorial(a));
    }
}