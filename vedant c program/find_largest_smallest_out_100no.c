# include <stdio.h>
int main(){
    int n,largest,smallest;
    printf("enter first number:\n");
    scanf("%d",&n);
    largest=n;
    smallest=n;
    for(int i=1;i<100;i++){
        printf("enter %d number:\n",i+1);
        scanf("%d",&n);
        if(n>largest){
            largest=n;
        }
        if(n<smallest){
            smallest=n;
        }
    }
    printf("largest number is %d\n",largest);
    printf("smallest number is %d\n",smallest);
    return 0;
}