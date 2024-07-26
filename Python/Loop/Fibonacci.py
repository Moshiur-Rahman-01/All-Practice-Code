position = int(input("Enter the Position: "))

first=0
second=1
count=0
while count<position:
    if count<=1:
        fibonacci=count
    else:
        fibonacci=first+second
        first=second
        second=fibonacci
    print(fibonacci,end=" ")
    count=count+1