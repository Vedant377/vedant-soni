 # include <stdio.h>
 int main (){
    int x;
    int arr[100],rev[100];
    printf("Enter number of elements in array:\n");
    scanf("%d",&x);
    if (x>0 && x<=100){
        printf("Enter elements of array:\n");
        for(int i=0;i<x;i++){
            scanf("%d",&arr[i]);
        }
        printf("Your array is:\n");
        for(int i=0;i<x;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
        for(int i=0;i<x;i++){
            rev[i]=arr[x-i-1];
        }
        printf("Reversed array is:\n");
        for(int i=0;i<x;i++){
            printf("%d ",rev[i]);
        }
    }
    else
    {
        printf("Please enter a positive integer less than or equal to 100 for the number of elements.\n");
    }
 }