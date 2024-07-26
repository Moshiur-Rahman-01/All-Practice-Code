number = int(input("Enter the number: "))
i=2
count=0
while i<number:
    if number%i==0:
        count=count+1
        break
    i=i+1
if count==0:
    print("Prime Number")
else:
    print("Not Prime Number")