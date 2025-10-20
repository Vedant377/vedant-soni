# include <stdio.h>
int main(){
    int a,i=0;
    printf("Enter a number:\n");
    scanf("%d",&a);
while (a!=0){
    a=a/10;
    i++;
}
printf("The number of digits in the given number is %d\n",i);
return 0;
}

