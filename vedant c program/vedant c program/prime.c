# include <stdio.h>
int main() {
  int prime;
    printf("Enter a positive integer: ");
    scanf("%d", &prime);
    if (prime >= 2) {
        for (int i = 2; i <= prime / 2; i++) {
            if (prime % i == 0) {
                printf("%d is not a prime number.\n", prime);
             
            }
        }
        printf("%d is a prime number.\n", prime);
    } else {
        printf("%d is not a prime number.\n", prime);
    }
    return 0;
}
 