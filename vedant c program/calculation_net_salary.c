#include<stdio.h>
int main(){
    int net_salary,gross_salary,allowance,deduction;
    printf("Enter the gross salary: ");
    scanf("%d", &gross_salary);
    allowance = gross_salary * 0.1; // 10% allowance
    deduction = gross_salary * 0.03; // 3% deduction
    net_salary = gross_salary + allowance - deduction;
    printf("Net Salary: %d\n", net_salary);
    return 0;
} 