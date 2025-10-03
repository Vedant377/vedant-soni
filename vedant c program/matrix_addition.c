# include <stdio.h>
int main()
{
    int row,col;
    int i,j;
if (row>0 && col>0){
    printf("Enter number of rows and columns:\n");
    scanf("%d %d",&row,&col);

    int a[row][col],b[row][col],sum[row][col];
    
    printf("Enter elements of first matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

     printf("your first matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("Enter elements of second matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    
     printf("your second matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }

    printf("Sum of the two matrices:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",sum[i][j]);
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