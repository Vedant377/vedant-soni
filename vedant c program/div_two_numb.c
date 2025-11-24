# include<stdio.h> 

int main(){
    float a,b;
    printf("Enter two numbers for division\n");
    scanf("%f %f",&a,&b);
    float div = a/b;
    printf("%f/%f=%f",a,b,div);
    return 0;
}