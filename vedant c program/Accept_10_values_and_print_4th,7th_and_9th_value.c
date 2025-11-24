# include <stdio.h>
int main (){
    int values[10];
    printf("Enter 10 values:\n");
    for(int i=0;i<10;i++){
        scanf("%d",&values[i]);
    }
    printf("The 4th, 7th and 9th values are:\n");
    printf("4th value: %d\n",values[3]);
    printf("7th value: %d\n",values[6]);
    printf("9th value: %d\n",values[8]);
    return 0;
}
