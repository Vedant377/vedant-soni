# include <stdio.h>
int main(){
    int a[100];
    int length=0;
    int i=0;
    printf("Enter a string:\n");
    for(i=0;i<100;i++){
        scanf("%c",&a[i]);
        if(a[i]=='\0'){
            break;
        }
        printf("Length of the i is: %d\n",i);
        length++;
    }
    printf("Length of the string is: %d\n",length);                     
    return 0;
}
