# include <stdio.h>
int main() {
    int side;
    printf("Enter the side length of the square: ");
    scanf("%d", &side);
    if (side >= 0) {
        int area = side * side;
        int perimeter = 4 * side;
        printf("Area of the square: %d\n", area);
        printf("Perimeter of the square: %d\n", perimeter);
    }
    else {
        printf("Please enter a non-negative value for the side length.\n");
    }
    return 0;
}
