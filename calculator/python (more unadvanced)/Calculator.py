while True:
    first = float(input("First number: "))
    second = float(input("Second number: "))
    operation = input("Operation: ")
    if operation == "+":
        print(first + second)
    elif operation == "-":
        print(first - second)
    elif operation == "*":
        print(first * second)
    elif operation == "/":
        print(first / second)
    else:
        print("Invalid Value.")
        pass
