number = int(input("Enter the number: "))
sum=0
temp=number
while number!=0:
    reminder=number%10
    sum=sum+reminder
    number=number//10
print(sum)