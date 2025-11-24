# include <stdio.h>
int main (){
    int a[3][3]={0};
    int *p[3][3];
    printf("Enter the elements of 3X3 matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        p[i][j]=&a[i][j];        
        scanf("%d",&a[i][j]);
        }
    }
    printf("your matrix is:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",*p[i][j]);
        }
        printf("\n");
    }
    int max=a[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
          if(*p[i][j]>max)
          max = a[i][j];
        }
    }
    int min=a[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
          if(*p[i][j]<min)
          min = a[i][j];
        }
    }
    printf("greatest value in the matrix = %d\n",max);
    printf("smallest value in the matrix = %d\n",min);
    return 0;
}