def find_lcm(x, y):
    if x > y:
        greater = x
    else:
        greater = y

    while True:
        if (greater % x == 0) and (greater % y == 0):
            lcm = greater
            break
        greater += 1

    return lcm


a = int(input("Enter the value of first number: "))
b = int(input("Enter the value of second number: "))

print("THE L.C.M IS", find_lcm(a, b))
