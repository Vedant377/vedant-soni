#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50}; 
    int n = 5;
    int pos;

    printf("Enter position from (1 to %d) to delete:\n",n);
    scanf("%d", &pos);
        pos--; 

    if (pos<1 || pos>n) {
        printf("please enter position between 1 to %d.\n", n);
    } else {
        
        printf("Array before deletion:\n");
        for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        }  
        printf("\n");
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; 
        printf("Array after deleting %d position of array:\n", pos+1);
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
