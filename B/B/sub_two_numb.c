# include<stdio.h> 

int main(){
    int a,b;
    printf("Enter two numbers for substraction\n");
    scanf("%d %d",&a,&b);
    int sub = a-b;
    printf("%d-%d=%d",a,b,sub);
    return 0;
}