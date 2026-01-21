gross_salary = float(input("Enter your gross salary: "))
allowance = gross_salary * 0.1
deductions = gross_salary * 0.03
net_salary = gross_salary + allowance - deductions
print("Your net salary is:", net_salary)
