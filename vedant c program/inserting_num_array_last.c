#include <stdio.h>

int main() {
    int arr[10] = {2, 4, 6, 8, 10}; 
    int n = 5; 
    int newNum; 

     printf("Enter the number to insert: ");
    scanf("%d", &newNum); 
     if (n >= 10) {
        printf("Array is full, cannot insert new number.\n");
        return 1;
    }
    else 
     {
     for (int i = n; i > 0; i--) 
     {
        arr[i-1] = arr[i-1];
     }

     arr[5] = newNum;
     n++; 

  
     printf("Array after inserting %d at ending:\n", newNum);
     for (int i = 0; i < n; i++)
      {
        printf("%d ", arr[i]);
     }

     return 0;
     }
}