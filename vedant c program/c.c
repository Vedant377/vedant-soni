# include <stdio.h>
int main (){
    int str[100];
    int length=0;
    printf("Enter a string:\n");
    for (int i=0;i<100;i++){
        scanf("%c",&str[i]);
        if(str[i]=='\n'){
            break;
        }
        length++;
    }
    for (int i=length-1;i>=0;i--){
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}