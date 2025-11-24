# include <stdio.h>
# include <string.h>
int main(){
    char str1[100];
    printf("Enter a string to print its characters vertically:\n");
    fgets(str1, sizeof(str1), stdin);
    strrev(str1);
    int len = strlen(str1);
    for(int i = 0; i < len; i++){
        if(str1[i] != '\n'){
            printf("%c\n", str1[i]);
        }
    }
    return 0;
}