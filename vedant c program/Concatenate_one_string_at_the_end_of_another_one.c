# include <stdio.h>
# include <string.h>
int main(){
    char str1[100], str2[100];
    printf("Enter the first string:\n");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string to concatenate at the end of the first string:\n");
    fgets(str2, sizeof(str2), stdin);
    int len1 = strlen(str1);
    len1--; 
    int len2 = strlen(str2);            
    len2--;
    for(int i = 0; i < len2; i++){
        str1[len1 + i] = str2[i];
    }
    str1[len1 + len2] = '\0';
    printf("Concatenated string: %s\n", str1);
    return 0;   
}