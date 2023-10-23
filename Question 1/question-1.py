numbers = []
tot = 0
print('*Enter numbers to find the average!*\n*Enter [E] to exit*')
try:
    while True:
        num = input("Enter any number: ")
        num = float(num)

        # checking for any repeated digit
        if num not in numbers:

            # if not adding to the numbers list
            numbers.append(num)
            tot += num

            # checking the average and then printing it
            print("Average: ", tot / len(numbers))
        else:

            # incase of a repeated digit
            print("This number has already been entered earlier!")
except ValueError:
    if num in ['e','E']:
        print("\nThankyou!")
    else:
        print("\nInvalid input!")
