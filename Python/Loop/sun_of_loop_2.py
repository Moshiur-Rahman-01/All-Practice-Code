# 1+1/2+1/3+...........+1/n

n=int(input("Enter Last Value: "))

i=1
sum=0
while i<=n:
    sum=sum+(1/i)
    i=i+1
print(sum)
