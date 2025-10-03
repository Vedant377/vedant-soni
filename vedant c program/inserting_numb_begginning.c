#include <stdio.h>

int main() {
    int arr[10] = {2, 4, 6, 8, 10}; 
    int n = 5; 
    int newNum = 1; 

    
    for (int i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = newNum;
    n++; 

  
    printf("Array after inserting %d at beginning:\n", newNum);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
