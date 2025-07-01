#include <iostream>
#include <algorithm>
using namespace std;

int maxSubArray(int arr[], int n){
    int res = arr[0];

    for (int i=0; i<n; i++) {
        int current = 0;

        for (int j=i; j<n; j++) {
            current += arr[j];

            res = max(current, res);
        }
    }
}

int main() {
    int arr[] = {2, 3, -8, 7, -1, 2, 3};
    int result = maxSubArray(arr, 7);
}