#Naive Approach i.e. Brute Force
def maxSubArraySum(arr):
    res = arr[0]

    for i in range(len(arr)):
        current = 0

        for j in range(i, len(arr)):
            current += arr[j]

            res = max(current, res)

    return res


def Kadane(arr):
    res = arr[0]
    maxEnd = arr[0]

    for i in range(1, len(arr)):
        maxEnd = max(arr[i], maxEnd + arr[i])

        res = max(maxEnd, res)

    return res


# arr = [2, 3, -8, 7, -1, 2, 3]
arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
# print(maxSubArraySum(arr))
print(Kadane(arr))

# print(6 << 1) # 110 => 1100 