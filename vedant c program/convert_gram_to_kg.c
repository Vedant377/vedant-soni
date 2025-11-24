# include <stdio.h>
int main(){
    float grams,kilograms;
    printf("enter weight in grams to convert it into kilograms\n ");
    scanf("%f",&grams);
    if (grams >= 0){
        kilograms = grams / 1000;
        printf("convertion of %.3f grams into kilograms is %f\n",grams,kilograms);
    }
    else {
        printf("please enter a number grater than or equal to 0\n");
    }
    return 0;
    
}