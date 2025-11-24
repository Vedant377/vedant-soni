#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50}; 
    int n = 5;
    int num, pos = -1;

    printf("Enter number to delete: ");
    scanf("%d", &num);

    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        printf("Number %d not found in array.\n", num);
    } else {
        
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; 
        printf("Array after deleting %d:\n", num);
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
