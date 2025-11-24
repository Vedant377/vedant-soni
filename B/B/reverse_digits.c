# include <stdio.h>
int main() {
    int num, reversed = 0,remainder;
    printf("Enter an integer:\n");
    scanf("%d", &num);
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    printf("%d",num);
    printf("Reversed number:\n%d", reversed);
 return 0;
}