# include <stdio.h>
int main(){
    int boy_count=0,girl_count=0;
    int total_students=5;
    char sex_code;
    printf("Enter sex code for 5 students M-males,F-females (M/F):\n");
    for(int i=1;i<=total_students;i++){
        printf("Student %d: ",i);
        scanf(" %c",&sex_code);
        if(sex_code=='M'||sex_code=='m'){
            boy_count++;
        }
        else if (sex_code=='F'||sex_code=='f'){
            girl_count++;
        }
        else{
            printf("Invalid input. Please enter from (M/F).\n");
            i--; 
            continue;
        }
    }
    printf("total number of students %d\n",total_students);
    printf("Number of boys: %d\n",boy_count);
    printf("Number of girls: %d\n",girl_count);
    return 0;
}

   
