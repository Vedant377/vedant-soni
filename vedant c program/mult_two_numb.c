# include<stdio.h> 

int main(){
    int a,b;
    printf("Enter two numbers for multiplication\n");
    scanf("%d %d",&a,&b);
    int mult = a * b;
    printf("%d*%d=%d",a,b,mult);
    return 0;
}