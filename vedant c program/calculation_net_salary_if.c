# include <stdio.h>
int main() {
    int net_salary, gross_salary, allowance, deduction;
    printf("Enter the gross salary: ");
    scanf("%d", &gross_salary);
    if (gross_salary > 10000) {
        allowance = gross_salary * 0.1;  
        deduction = gross_salary * 0.03; 
        net_salary = gross_salary + allowance - deduction;
        printf("Net Salary: %d\n", net_salary);
    } else if (gross_salary >= 5000 && gross_salary <= 10000) {
        allowance = gross_salary * 0.07;
        deduction = gross_salary * 0.02;
      net_salary = gross_salary + allowance - deduction;
        printf("Net Salary: %d\n", net_salary);
    } else 
        printf("Gross salary must be at least 5000 to calculate net salary.\n");
        return 0;
}
     