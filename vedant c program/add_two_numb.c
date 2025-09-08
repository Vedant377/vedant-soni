# include<stdio.h> 

int main(){
    int a,b;
    printf("Enter two numbers for addition\n");
    scanf("%d %d",&a,&b);
    int sum = a+b;
    printf("%d+%d=%d",a,b,sum);
    return 0;
}