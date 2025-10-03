#include <stdio.h>
int main() {
    int size, n, x, found = 0;
    printf("Enter number of elements in array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for(n = 0; n < size; n++) {
        scanf("%d", &arr[n]);
    }
    printf("Enter value to search: ");
    scanf("%d", &x);
    for(n = 0; n < size; n++) {
        found=1;
        if(arr[n] == x) {
            printf("Value %d found at position %d (index %d).\n", x, n+1, n );
            found = 0;
            break; // stops after finding the first occurrence
        }
    }
    if(found) {
        printf("Value %d not found in the array.\n", x);                         
    }
    return 0;
}
