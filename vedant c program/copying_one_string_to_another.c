# include <stdio.h>
#include <string.h>
int main (){
    char str1[100], str2[100];
    printf("Enter the first string:\n");
    fgets(str1, sizeof(str1), stdin);
    strcpy(str2, str1);
    printf("The copied string is: %s\n", str2); 
    return 0;
}
