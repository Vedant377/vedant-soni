#include<stdio.h>
int main() {
    float math, science, english,total;
    printf("Enter marks for Math, Science, and English: ");
    scanf("%f %f %f", &math, &science, &english);
    if (math >= 0 && science >= 0 && english >= 0) {
        float average = (math + science + english) / 3.0;
        float total = (math+science+english);
        printf("Average of the three subjects: %f\n", average);
        printf("Total of the three subjects : %.4f+%.4f+%.4f=%.4f",math,science,english,total);
    } 
    else 
    {
        printf("Please enter non-negative values for the marks.\n");
    }
}