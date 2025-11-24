# include <stdio.h>
# include <math.h>
int main () {
    int num,sqre,i=0,original;
    printf("Enter a number:\n");
    scanf("%d",&num);
    sqre = num * num;
    original=num;
    while(num!=0){
        num = num / 10;
        i++;
    }
    float v = pow(10,i);
    if(sqre % (int)v ==original){ 
        printf("The number is an Automorphic number\n");
    }
    else{
        printf("The number is not an Automorphic number\n");
    }
}