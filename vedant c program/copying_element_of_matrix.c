# include <stdio.h>
int main (){
    int a[10]={1,2,3,4,5};
    int b[10]={0};
    int i,j=0;
    for(int i=0;i<5;i++){
        b[j]=a[i];
        j+=2;
    }
    printf("Elements of first array:\n");
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    printf("\nElements of second array after copying from first array:\n");
    for(int i=0;i<10;i++){
        printf("%d ",b[i]);
    }
    return 0;

}