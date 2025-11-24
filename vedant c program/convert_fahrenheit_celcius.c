# include<stdio.h>
int main() {
    float celsius, fahrenheit;
    printf("Enter temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);
    if (celsius >= -273.15) {
         celsius = (fahrenheit - 32) * 5 / 9;
        printf("Temperature in celsius: %f\n", celsius);
    }
    else {
        printf("Please enter a temperature greater than or equal to -273.15\n");
    }
    return 0;
}