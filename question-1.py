numbers = []
tot = 0
dig = [1, 2, 3, 4, 5, 6, 7, 8, 9]
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
    if num == 'e':
        print("\nThankyou!")
    else:
        print("\nInvalid input!")
