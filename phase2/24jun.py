def mul(a, b):
    return a*b

num = int(input("Enter a number: "))

for i in range(1,11):
    # print(f"{num} * {i} = {mul(num, i)}")
    print("{} * {} = {}".format(num, i, mul(num, i)))