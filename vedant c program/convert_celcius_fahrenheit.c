#include <Stdio.h>
int main() {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    if (celsius >= -273.15) {
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %f\n", fahrenheit);
    }       
    else {
        printf("Please enter a temperature greater than or equal to -273.15\n");
    }       
    return 0;
}                                                                                                                                            