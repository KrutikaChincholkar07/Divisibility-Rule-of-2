num = int(input("Enter a number: "))

last_digit = num % 10

if last_digit % 2 == 0:
    print(num, "is divisible by 2")
else:
    print(num, "is not divisible by 2")
