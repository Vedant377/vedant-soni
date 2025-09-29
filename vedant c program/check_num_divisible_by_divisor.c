# include <stdio.h>
int main() {
    int N,D;
    printf("Enter an integer number:\n");
    scanf("%d", &N);
    printf("Enter the divisor:\n");
    scanf("%d", &D);
    if (D == 0) {
        printf("Division by zero is not allowed.\n");
    } else if (N%D == 0) {
        printf("%d is divisible by %d\n",N,D);
    } else {
        printf("%d is not divisible by %d\n",N,D);
    }
    return 0;
}