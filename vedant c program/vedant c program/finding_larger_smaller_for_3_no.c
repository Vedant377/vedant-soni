# include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    int largest, smallest;
    if (a >= b && a >= c) 
    {
        largest = a;
        smallest = (b < c) ? b : c;
    }
    else if (b >= a && b >= c) 
    {
        largest = b;
        smallest = (a < c) ? a : c;
    } 
    else (c >= a && c >= b);
     {
        largest = c;
        smallest = (a < b) ? a : b;
    }
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);
    return 0;
}