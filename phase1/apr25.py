def selectionSort(arr):
    n = len(arr)
    for i in range(n):
        mini = i
        for j in range(i+1, n):
            if arr[j] < arr[mini]:
                mini = j
        if mini != i:
            arr[i], arr[mini] = arr[mini], arr[i]

arr1 = [9,8,7,6,5,4,3,2,1]
selectionSort(arr1)
print(arr1)