# include <stdio.h>
int main() {
    float radius, area;
    const float PI = 3.14159;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    if (radius >= 0) {
        area =  PI* radius * radius;
        printf("Area of the circle: %f\n", area);
    }
    else {
        printf("Please enter a non-negative value for the radius.\n");
    }
    return 0;
}