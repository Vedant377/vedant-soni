# include <stdio.h>
int main(){
    int n;
    int pos_count=0,neg_count=0,zero_count=0;
    printf("Enter 200 numbers:\n");
    for(int i=0;i<200;i++){
        scanf("%d",&n);
        if(n>0){
            pos_count++;
        }
        else if(n<0){
            neg_count++;
        }
        else{
            zero_count++;
        }
    }
    printf("Count of positive numbers: %d\n",pos_count);
    printf("Count of negative numbers: %d\n",neg_count);
    printf("Count of zeroes: %d\n",zero_count);
    return 0;
}