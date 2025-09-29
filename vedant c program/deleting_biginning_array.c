#include <stdio.h>

int main() {
    int arr[10] = {5, 10, 15, 20, 25}; 
    int n = 5;  
    printf("Array before deletion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nDeleting element from beginning...\n");

   
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Array after deletion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
