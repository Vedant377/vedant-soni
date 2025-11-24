#include <stdio.h>
#include <math.h>
int main(){
    int num,a,sum=0,original;
    float b;
    printf("Enter a number:\n");
    scanf("%d",&num);
    original=num;
    while(num!=0){
        a=num % 10;
        b= pow (a,3);
        sum = sum + b;
        printf("(%d)^3+",a);
         num = num / 10;
    }
    if(num==0){
        printf("(0)^3=");
    }
    printf("%d\n",sum);
    if(sum==original){
        printf("The number is an Armstrong number\n");
    }
    else{
        printf("The number is not an Armstrong number\n");
    }

    return 0;
}