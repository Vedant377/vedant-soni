# include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    if (a > b) 
    {
        printf("The larger number is: %d\n", a);
        printf("The smaller number is: %d\n", b);
    } 
    else if (a < b) 
    {
        printf("The larger number is: %d\n", b);
        printf("The smaller number is: %d\n", a);
    } 
    else
    {
        printf("Both numbers are equal: %d\n", a);
    }

    return 0;
}