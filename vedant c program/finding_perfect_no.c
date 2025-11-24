# include <stdio.h>
int main (){
    int n,sum=0;
    printf("enter a number to find its factors:\n");
    scanf("%d",&n);
    if(n<=0){
        printf("Please enter a positive integer.\n");
        return 1;
    }
    printf("factors of %d are:\n",n);
    for(int i=1;i<n;i++){
        if(n%i==0){
            printf("%d",i);
            if(i!=n/2){
                printf(",");
                
    }
    sum = sum + i;
    }
    }
    if(sum==n){
        printf("\nThe number is a perfect number\n");
    }
    else{
        printf("\nThe number is not a perfect number\n");
    }
    return 0;
}