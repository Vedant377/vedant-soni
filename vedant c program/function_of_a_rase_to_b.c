# include <stdio.h>
int power(int a, int b);// function prototype
int main (){
    int a,b,result;
    printf("Enter base and exponent values:\n");
    scanf("%d %d",&a,&b);
    result=power(a,b);// function call
    printf("%d raised to the power %d is %d\n",a,b,result);
    return 0;
}
int power(int a, int b){// function definition
    int result=1;
    for(int i=1;i<=b;i++){
        result=result*a;
    }
    return result;
}