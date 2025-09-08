# include <stdio.h>
int main() {
    int num, reversed = 0, original, remainder;
    printf("Enter an integer:\n");
    scanf("%d", &num);
    original = num;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    printf("Reversed number:\n%d", reversed);
 return 0;
}