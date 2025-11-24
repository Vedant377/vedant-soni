# include <stdio.h>
# include <string.h>
int main(){
    char a[100];
    int length=0;
    printf("Enter a string:\n");
    scanf("%s",a);
    length = strlen(a);
    printf("Length of the string is: %d\n",length);                     
    return 0;
}
