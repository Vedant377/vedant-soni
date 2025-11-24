# include <stdio.h>
int main (){
    int n;
    printf("Enter the number of times you want to print your name:\n");
    scanf("%d",&n);
    char name[100];
    printf("Enter your name:\n");
    scanf("%s",&name);
    for(int i=0;i<n;i++){
        printf("%s\n",name);
    }
    return 0;
}   