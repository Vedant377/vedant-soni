# include <stdio.h>
int main(){
    int n,i;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("First %d odd numbers are \n",n);
    for(i=1;i<=n;i++){
    printf("%d\n",2*i-1);
    }
    return 0;
}