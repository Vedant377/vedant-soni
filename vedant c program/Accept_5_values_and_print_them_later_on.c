# include <stdio.h>
int main (){
    int values[5];
    printf("Enter 5 values:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&values[i]);
    }
    printf("The entered values are:\n");
    for(int i=0;i<5;i++){
        printf("%d\n",values[i]);
    }
    return 0;
}