a = float(input("Enter first number: "))
b = float(input("Enter second number: "))
sum = a + b
difference = a - b
product = a * b
if b != 0:
    quotient = a / b    
    print("The quotient when", a, "is divided by", b, "is:", quotient)
else:
    print("Division by zero is not allowed.")
print("The sum of", a, "and", b, "is:", sum)
print("The difference when", b, "is subtracted from", a, "is:", difference)
print("The product of", a, "and", b, "is:", product)