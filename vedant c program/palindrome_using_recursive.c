# include <stdio.h>
int palindrome(int n);
int main(){
    int n;
    printf("Enter a number to check if it's a palindrome using recursion:\n");
    scanf("%d",&n);
    int result=palindrome(n);
    if (result==n){
        printf("%d is a palindrome number.\n",n);
    }
    else{
        printf("%d is not a palindrome number.\n",n);
    }
    printf("Sum of digits of %d is %d\n",n,result);
    return 0;
}
int palindrome(int n){
    if(n==0){
        return 0; 
    }
    else{
        
    }
}