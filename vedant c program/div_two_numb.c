# include<stdio.h> 

int main(){
    int a,b;
    printf("Enter two numbers for division\n");
    scanf("%d %d",&a,&b);
    int div = a/b;
    printf("%d/%d=%d",a,b,div);
    return 0;
}