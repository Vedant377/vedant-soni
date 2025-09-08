# include <stdio.h>
int main () {
    int a=0;
    printf("Prime numbers between 1 and 500 are:\n");
    for (int num =2; num <= 500; num++){
        int is_prime = 1; // Assume number is prime
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = 0; // Number is not prime
                break;
            }
        }
        if (is_prime) {
            printf("%d\n", num);
            a++;
        }
    }
    printf("Total prime numbers between 1 and 500 are: %d\n", a);
}