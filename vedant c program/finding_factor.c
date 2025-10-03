# include <stdio.h>
int main (){
    int n;
    printf("enter a number to find its factors:\n");
    scanf("%d",&n);
    if(n<=0){
        printf("Please enter a positive integer.\n");
        return 1;
    }
    printf("factors of %d are:\n",n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            printf("%d",i);
            if(i!=n){
                printf(",");
        }
    }
    }
    return 0;
}