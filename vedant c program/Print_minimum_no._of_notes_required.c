# include <stdio.h>
int main (){
     int value;
     int n[7]={2000,500,200,100,50,20,10};
     int count[7]={0,0,0,0,0,0,0};
     int i;
        printf("Enter the amount to Print minimum no. of notes required:\n");
        scanf("%d",&value);
        for(i=0;i<7;i++){
            if(value>=n[i]){
                count[i]=value/n[i];
                value=value - count[i]*n[i];
            }
        }
    printf("Minimum number of notes required:\n");
    for(i=0;i<7;i++){
        if(count[i]!=0){
            printf("Number of %d notes: %d\n",n[i],count[i]);
        }
    }
    return 0;
}