numbers = []
tot = 0
print('*Enter numbers to find the average!*\n*Enter [E] to exit*')
try:
    while True:
        num = input("Enter any number: ")
        num = float(num)
        if num not in numbers:
            numbers.append(num)
            tot += num
            print("Average: ", tot / len(numbers))
        else:
            print("This number has already been entered earlier!")
except ValueError:
    if num in ['e','E']:
        print("\nThankyou!")
    else:
        print("\nInvalid input!")
