number = int(input("Enter the number: "))

temp=number
sum=0
fact=1
while temp!=0:
    reminder=temp%10
    i=1
    while i<=reminder:
        fact=fact*i
        i=i+1
    sum=sum+fact
    temp=temp//10
if sum==number:
    print("This is a Strong Number.")
else:
    print("This is not a Strong Number.")