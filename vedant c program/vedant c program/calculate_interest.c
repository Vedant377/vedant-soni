# include <stdio.h>
int main() {
    float principal, rate, time, interest;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time in years: ");
    scanf("%f", &time);
    if (principal >= 0 && rate >= 0 && time >= 0) {
        interest = (principal * rate * time) / 100;
        printf("Calculated interest: %f\n", interest);
    }
    else {
        printf("Please enter non-negative values for principal, rate, and time.\n");
    }
    return 0;
}