# include <stdio.h>
int main(){
    int d1,d2,d3,d4;
    int i,j;
    printf("Enter number of dimensions of matrix:\n");
    scanf("%d %d %d %d",&d1,&d2,&d3,&d4);
    if (d1>0 && d2>0 && d3>0 && d4>0){
        int a[d1][d2][d3][d4],transpose[d4][d3][d2][d1];
        printf("Enter elements of matrix:\n");
        for(i=0;i<d1;i++)
        {
            for(j=0;j<d2;j++)
            {
                for(int k=0;k<d3;k++)
                {
                    for(int l=0;l<d4;l++)
                    {
                        scanf("%d",&a[i][j][k][l]);
                    }
                }
            }
        }
         printf("your matrix:\n");
        for(i=0;i<d1;i++)
        {
            for(j=0;j<d2;j++)
            {
                for(int k=0;k<d3;k++)
                {
                    for(int l=0;l<d4;l++)
                    {
                        printf("%d ",a[i][j][k][l]);
                    }
                    printf("\n");
                }
                printf("\n");
            }
            printf("\n");
        }
        for(i=0;i<d1;i++)
        {
            for(j=0;j<d2;j++)
            {
                for(int k=0;k<d3;k++)
                {
                    for(int l=0;l<d4;l++)
                    {
                        transpose[l][k][j][i]=a[i][j][k][l];
                    }
                }
            }
        }

        printf("Transpose of the matrix:\n");
        for(i=0;i<d4;i++)
        {
            for(j=0;j<d3;j++)
            {
                for(int k=0;k<d2;k++)
                {
                    for(int l=0;l<d1;l++)
                    {
                        printf("%d ",transpose[i][j][k][l]);
                    }
                    printf("\n");
                }
                printf("\n");
            }
            printf("\n");
        }
    }
    else{
        printf("Please enter positive integers for dimensions.\n");
    }
}