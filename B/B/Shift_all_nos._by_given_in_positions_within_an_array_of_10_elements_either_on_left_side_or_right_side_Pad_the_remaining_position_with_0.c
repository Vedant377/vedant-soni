# include <stdio.h>
 int main (){
    int a[100];
    int pos,shift;
    printf("Enter 10 elements of array:\n");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter number of positions to shift (1-9):\n");
    scanf("%d",&pos);
    printf("Enter 1 to shift left or 2 to shift right:\n");
    scanf("%d",&shift);
    if(shift==1){
        for(int i=0;i<10-pos;i++){
            a[i]=a[i+pos];
        }
        for(int i=10-pos;i<10;i++){
            a[i]=0;
        }
    }
    else if(shift==2){
        for(int i=9;i>=pos;i--){
            a[i]=a[i-pos];
        }
        for(int i=0;i<pos;i++){
            a[i]=0;
        }
    }
    printf("Array after shifting:\n");
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
    }
    