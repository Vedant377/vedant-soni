# include <stdio.h>
int main(){
    float grams,kilograms;
    printf("enter weight in kilograms to convert it into grams\n ");
    scanf("%f",&kilograms);
    if (kilograms >= 0){
        grams = kilograms*1000;
        printf("convertion of %.3f kilograms into grams is %f\n",kilograms,grams);
    }
    else {
        printf("please enter a number grater than or equal to 0\n");
    }
    return 0;
    
}