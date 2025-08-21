#include<stdio.h>
int main() {
    float math, science, english;
    printf("Enter marks for Math, Science, and English: ");
    scanf("%f %f %f", &math, &science, &english);
    if (math >= 0 && science >= 0 && english >= 0) {
        float average = (math + science + english) / 3.0;
        printf("Average of the three subjects: %f\n", average);
    } else {
        printf("Please enter non-negative values for the marks.\n");
    }
    