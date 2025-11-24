# include <stdio.h>

int main ()
{
    float M;
    printf("enter minutes to convert it into hours\n");
    scanf("%f",&M);
    if (M>0) {
      printf("convertion of %f minutes into hours is %f",M,(M/60));
    }
    else 
    {
        printf("choose number greater than 0");
    }
    return 0;
}