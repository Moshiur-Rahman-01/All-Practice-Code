
num=[5,9,6,1,7,3,8,0,2,4]

i=0
while i<10:
    j=0
    while j<10:
        if num[j+1]<num[j]:
            temp=num[j]
            num[j]=num[j+1]
            num[j+1]=temp
        j=j+1
    i=i+1

i=0
while i<10:
    printf(num[i])
    i=i+1
# vul