mark = int(input("Enter a mark: "))

if 0<=marks<=100:
    if mark>32:
        print("Pass")
    else:
        print("Fail")
else:
    print("Invalid Number.")
