# include <stdio.h>
int main ()
{
   int  r1,r2,c1,c2,i,j,k;  
    printf("Enter rows and columns for first matrix:\n");
    scanf("%d %d",&r1,&c1);
    printf("Enter rows and columns for second matrix:\n");
    scanf("%d %d",&r2,&c2);


    if (c1!=r2)
    {
        printf("Error! column of first matrix not equal to row of second.\n");
    }
    else if (r1>0 && c1>0 && r2>0 && c2>0)
    {
        int a[r1][c1],b[r2][c2],mul[r1][c2];
        printf("Enter elements of first matrix:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
         printf("your first matrix:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        printf("Enter elements of second matrix:\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
         printf("your second matrix:\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d ",b[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++){
                mul[i][j]=0;
                for(k=0;k<c1;k++)
                {
                    mul[i][j]+=a[i][k]*b[k][j];
                }
            }
            }
        printf("Multiplication of the two matrices:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d ",mul[i][j]);
            }
            printf("\n");
        }
    }
    else 
    {
    printf("Please enter positive integers for rows and columns.\n");
    }
    return 0;
}

            
