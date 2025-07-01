arr = [10, 20, 30, 40, 50]

for i in range(5):
    for j in range(i,5):
        for k in range(i,j+1):
            print(arr[k], end=" ")
        print()
    print()
