#include <iostream>
#include <algorithm>
using namespace std;

// Naive / Brute Force approach
int maxSubArray(int arr[], int n){
    int res = arr[0];

    for (int i=0; i<n; i++) {
        int current = 0;

        for (int j=i; j<n; j++) {
            current += arr[j];

            res = max(current, res);
        }
    }
    return res;
}

int kadane (int arr[], int n) {
    int res = arr[0];
    int maxEnd = arr[0];

    for (int i=1; i<n; i++) {
        maxEnd = max(arr[i], maxEnd + arr[i]);

        res = max(maxEnd, res);
    }

    return res;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int result = maxSubArray(arr, 8);
    int resultKD = kadane(arr, 8);
    cout << "Max Subarray sum via Brute Force: " << result << endl;
    cout << "Max Subarray sum via Kadane's Algorithm: " << resultKD << endl;
}