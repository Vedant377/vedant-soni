# include <stdio.h>
# include <string.h>
int main(){
    char name[100];
    int j = 0;
    printf("Enter full name:\n");
    fgets(name, sizeof(name), stdin);
    // Remove newline if present
    if (name[strlen(name) - 1] == '\n')
        name[strlen(name) - 1] = '\0';
        int len=strlen(name);
    printf("Length of the name: %d\n",len);
    // Remove all spaces
   // for(int i = 0; name[i] != '\0'; i++) {
       //if(name[i] != ' ') {
         //  name[j] = name[i];
          //  j++;
       // }
   // }
   // name[j] = '\0'; // end the new string
    //printf("Name without spaces: %s\n", name);
    printf("Abbreviated name:\n");
    for (int i = 0; i < len; i++) 
    {
        printf("%d\n",i);
         if (i == 0 || name[i - 1] == ' ') 
         {
            int k = i;
            printf("ki=%d\n",k);
             while (k < len && name[k] != ' '){
                k++;
                printf("kf=%d\n",k);
             }
            if (k == len) 
            {
                for (j = i; j < len; j++)
                    printf("%c", name[j]);//
            } else 
            {
                printf("%c.\n", name[i]);//v. j. 
            }
        }   
    }
    printf("\n");
    return 0;
}