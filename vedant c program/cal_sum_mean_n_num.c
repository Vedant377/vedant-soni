# include <stdio.h>
int main(){
    int n,x;
    float sum=0,mean;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("The sum and mean of any %d numbers is:\n",n);
    for (int i=1;i<=n;i++){
        printf("Enter number %d:\n",i);
        scanf("%d",&x);
        sum = sum + x;
    }
    printf("The sum of %d numbers is %f\n",n,sum);
    mean = sum/n;
    printf("The mean of %d numbers is %f\n",n,mean);
    return 0;
}