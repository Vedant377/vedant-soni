# include <stdio.h>
# include <string.h>
int main(){
    char str1[100];
    printf("Enter a string to print its frequency of vowels:\n");
    fgets(str1, sizeof(str1), stdin);
    int len = strlen(str1);
    int freq[5] = {0}; // a, e, i, o, u
    for(int i = 0; i < len; i++){
        char ch = str1[i];
        if(ch == 'a' || ch == 'A'){
            freq[0]++;
        }
        else if(ch == 'e' || ch == 'E'){
            freq[1]++;
        }
        else if(ch == 'i' || ch == 'I'){
            freq[2]++;
        }
        else if(ch == 'o' || ch == 'O'){
            freq[3]++;
        }
        else if(ch == 'u' || ch == 'U'){
            freq[4]++;
        }
    }
    printf("Frequency of vowels in the string:\n");
    printf("a/A: %d\n", freq[0]); 
    printf("e/E: %d\n", freq[1]);
    printf("i/I: %d\n", freq[2]);                   
    printf("o/O: %d\n", freq[3]);
    printf("u/U: %d\n", freq[4]);   
    return 0;       
}                                                                                                                                 