#Letter/Grade
marks = int(input("Enter your marks : "))

if 0<=marks<=100:
    if marks>=80:
        print("A+")
    elif marks>=70:
        print("A")
    elif marks>=60:
        print("A-")
    elif marks>=50:
        print("B")
    elif marks>=40:
        print("C")
    elif marks>=33:
        print("D")
    else:
        print("Fail")
else:
    print("Invalid Number.")