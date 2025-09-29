#include <stdio.h>

int main() {
    int arr[20] = {1, 2, 3, 4, 5}; 
    int n = 5;  
    int pos, newNum;

    printf("Enter the number to insert: ");
    scanf("%d", &newNum);

    printf("Enter the position (0 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
    } else {
     
        for (int i = n; i > pos; i--) {
            arr[i] = arr[i - 1];
        }

        
        arr[pos] = newNum;
        n++; 


        printf("Array after insertion:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
