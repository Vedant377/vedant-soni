# include <stdio.h>
int main(){
    int a,c;
    printf("Enter a number:\n");
    scanf("%d",&a);
 while (a!=0) {
    c=a%10;
    printf("%d",c);//153
    a=a/10;
}    
   printf("\n");
   printf("reverse of the number is %d\n",c);
return 0;
}