number = int(input("Enter the number: "))

sum=0
while number!=0:
    reminder=number%10
    sum=sum*10+reminder
    number=number//10
print(sum)