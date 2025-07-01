#include <iostream>
#include <algorithm>
using namespace std;


int maxSubArraySum(int arr[], int n) {
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


void printSubArray(int arr[], int n) {

    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            bool first = true;
            for (int k=i; k<=j; k++) {
                if (first) {cout << "[" << arr[k]; first = false;}
                else {cout << ", " << arr[k]; }
            } cout << "]" << endl;
        } cout << endl;
    }
}


int main() {
    int arr[] = {-2, -1, -3, -4, -1, -2, -1, 77, -5, -4};
    int n = sizeof(arr)/sizeof(int);
    cout << maxSubArraySum(arr, n);
}