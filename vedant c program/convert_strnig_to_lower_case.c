# include <stdio.h>
# include <string.h>
int main(){
    char a[100];
    printf("Enter a string to lower case:\n");
    scanf("%s",a);
    strlwr(a);
    printf("lower case of the string is: %s\n",a);                     
    return 0;
}