# include <stdio.h>
# include <string.h>
int main(){
    char a[100];
    printf("Enter a string to upper case:\n");
    scanf("%s",a);
    strupr(a);
    printf("upper case of the string is: %s\n",a);                     
    return 0;
}