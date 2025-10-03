# include <stdio.h>
int main(){
    int sum=0;
    printf("The numbers divisible by 13 from 1 to 100 are:\n");
    for (int n=1;n<=100;n++){
    if(n%13==0){
    printf("%d\n",n);
    sum = sum + n;
    }
}
printf("The sum of numbers divisible by 13 from 1 to 100 is %d\n",sum);
return 0;
}

