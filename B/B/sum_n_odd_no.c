# include <stdio.h>
int main(){
    int n,sum=0,i;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
     sum=sum+(i*2-1);
    }
    printf("Sum of first %d odd numbers is %d\n",n,sum);
    return 0;
}