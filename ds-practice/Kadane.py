def maxSubArraySum(arr):
    res = arr[0]

    for i in range(len(arr)):
        current = 0

        for j in range(i, len(arr)):
            current += arr[j]

            res = max(current, res)

    return res

arr = [2, 3, -8, 7, -1, 2, 3]
print(maxSubArraySum(arr))

# print(6 << 1) # 110 => 1100 