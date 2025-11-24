# include <stdio.h>
int factorial(int a);
int main(){
int a;
printf ("Enter a number to calculate its factorial:\n");
scanf ("%d",&a);
int result=factorial(a);
printf("Factorial of %d! is %d\n",a,result);
}
int factorial(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    return fact;
}