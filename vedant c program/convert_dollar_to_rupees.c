# include <stdio.h>

int main ()
{
    float D;
    printf("enter dollars to convert it into rupees\n");
    scanf("%f",&D);
    if (D>0) {
      printf("convertion of %f dollars into rupees is %f",D,(D*48));
    }
    else 
    {
        printf("choose number greater than 0");
    }
    return 0;
}