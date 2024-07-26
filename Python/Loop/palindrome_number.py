number = int(input("Enter the number: "))

sum=0
temp=number
while temp!=0:
    reminder=temp%10
    sum=sum*10+reminder
    temp=temp//10
if sum==number:
    print("Number is Palindrome.")
else:
    print("Number is Not Palindrome.")