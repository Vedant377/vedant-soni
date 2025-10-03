#include<stdio.h>
int main() {
    float dollar,pound,rupee;
    printf("Enter the amount in dollars: ");
    scanf("%f", &dollar);
    if (dollar >= 0) {
        rupee = dollar / 48;
        pound = rupee * 70.0;
        printf("Equivalent amount in pounds: %f\n", pound);
    } else {
        printf("Please enter a non-negative value for the dollar amount.\n");
    }
    return 0;
}
