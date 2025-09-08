# include <stdio.h>

int main ()
{
    float R;
    printf("enter rupees to convert it into dollars \n");
    scanf("%f",&R);
    if (R>0) {
      printf("convertion of %f rupees into dollars is %f",R,(R/48));
    }
    else 
    {
        printf("choose number greater than 0");
    }
    return 0;
}