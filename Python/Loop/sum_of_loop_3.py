# 1^2+2^2+3^2+...........+n^2

n=int(input("Enter Last Value: "))

i=1
sum=0
while i<=n:
    sum=sum+i*i
    i=i+1
print(sum)
