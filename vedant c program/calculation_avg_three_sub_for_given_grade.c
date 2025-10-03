# include <stdio.h>
int main() {
    int maths,physics,chemistry;
    printf("Enter marks for Maths, Physics, and Chemistry:\n");
    scanf("%d\n%d\n%d", &maths, &physics, &chemistry);
    if (maths >= 0 && physics >= 0 && chemistry >= 0) {
        float average = (maths + physics + chemistry) / 3.0;
        float total = (maths + physics + chemistry);
        printf("Average of the three subjects: %f\n", average);
        printf("Total of the three subjects : %d+%d+%d=%d\n", maths, physics, chemistry, total);
        if (average >= 70) {
            printf("Grade: distinction\n");
        } else if (average >= 60) {
            printf("Grade: first class\n");
        } else if (average >= 50) {
            printf("Grade: second class\n");
        } else if (average >= 35) {
            printf("Grade: third class\n");
        } else {
            printf("Grade: fail\n");
        }
    } 
    else 
    {
        printf("Please enter non-negative values for the marks.\n");
    }
    return 0;
}














