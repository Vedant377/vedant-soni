# include <stdio.h>
int main(){
    int n,fact=1,i;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
   for(i=n;i>=1;i--){
    if(i==1){
        printf("%d=\n",i);
    }
    else{
    printf("%d*",i);
    }
    fact=fact*i;
   }
     printf("Factorial of %d is %d\n",n,fact);
    return 0;
}

