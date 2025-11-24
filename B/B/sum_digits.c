# include <stdio.h>
int main(){
    int a,c,sum=0;
    printf("Enter a number:\n");
    scanf("%d",&a);
while (a!=0){
    c=a%10;
    a=a/10;
    sum = sum + c;
    printf("%d\n",c);
}
printf("The sum of digits in the given number is %d\n",sum);
return 0;
}
