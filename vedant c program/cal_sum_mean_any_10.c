# include <stdio.h>
int main(){
    int n;
    float sum=0;
    float mean;
    printf("The sum and mean of any 10  numbers is:\n");
    for (int i=1;i<=10;i++){
        printf("Enter number %d:\n",i);
        scanf("%d",&n);
        sum = sum + n;
    }
    printf("The sum of 10 numbers is %f\n",sum);
    mean = sum/10;
    printf("The mean of 10 numbers is %f\n",mean);
    return 0;
}