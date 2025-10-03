# include <stdio.h>

int main ()
{
    float H;
    printf("enter hours to convert it into minutes\n");
    scanf("%f",&H);
    if (H>0) {
      printf("convertion of %f hours into minutes is %f",H,(H*60));
    }
    else 
    {
        printf("choose number greater than 0");
    }
    return 0;
}