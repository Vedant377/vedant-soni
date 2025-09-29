# include <stdio.h>
int main(){
    int a[5],t,i,j;
    printf("Enter 5 numbers:\n");
    for( i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("Numbers in descending order are:\n");
    for ( j=0;j<5;j++){
      for( i=0;i<5-j;i++){
        if(a[i]<a[i+1]){
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
        }   
    }
    for(i=0;i<5;i++){
        printf("%d\n",a[i]);
    }
      
    return 0;
}




