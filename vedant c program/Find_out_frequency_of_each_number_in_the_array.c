# include <stdio.h>
 int main (){
    int a[10],frequency[10];
    for(int i=0;i<10;i++){
        frequency[i]=0;
    }
    printf("Enter 10 elements of array:\n");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++){
        frequency[a[i]]++;
    }
    printf("Frequency of each number in the array is:\n");
    for(int i=0;i<10;i++){
        printf("Number %d: %d times\n",i,frequency[i]);
    }
    return 0;
    }
    