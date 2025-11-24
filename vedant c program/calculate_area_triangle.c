# include <stdio.h>
int main() {
    int height, base;
    float area;
    printf("Enter the height of the triangle: ");
    scanf("%d", &height);
    printf("Enter the base of the triangle: ");
    scanf("%d", &base);
    if (height >= 0 && base >= 0) {
        area = 0.5 * height * base;
        printf("Area of the triangle: %f\n", area);
    } else {
        printf("Please enter non-negative values for height and base.\n");
  }
    return 0;
}