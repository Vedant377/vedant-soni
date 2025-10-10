#include <stdio.h>
int main()
{
int size;

printf("enter the size of array:\n");
scanf("%d",&size);
int a[size];
printf("enter the elements in array\n");
for(int i=0;i<size;i++){
    scanf("%d",&a[i]);
}
int *p=&a[0];
for(int i=0;i<size;i++){
    printf("%d",p);
    p++;
    printf("\n");
}
return 0;
}
