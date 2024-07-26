number1 = int(input("Enter the 1st number: "))
number2 = int(input("Enter the 2nd number: "))

while number2!=0:
    reminder=number1%number2
    number1=number2
    number2=reminder
GCD=number1
print(GCD)

number1 = int(input("Enter the 1st number: "))
number2 = int(input("Enter the 2nd number: "))
LCM=(number1*number2)//GCD
print(LCM)