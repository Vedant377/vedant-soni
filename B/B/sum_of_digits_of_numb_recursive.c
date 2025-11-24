# include <stdio.h>
int sum_of_digits(int n);
int main(){
    int n;
    printf("Enter a number to calculate the sum of its digits recursively:\n");
    scanf("%d",&n);
    int result=sum_of_digits(n);
    printf("Sum of digits of %d is %d\n",n,result);
    return 0;
}
int sum_of_digits(int n){
    if(n==0){
        return 0; 
    }
    else{
        return (n % 10) + sum_of_digits(n / 10); 
    }
}