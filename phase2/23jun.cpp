#include <iostream>
using namespace std;

int BinarySearch(int arr[], int low, int high, int target) {
    if (low <= high) {
        int mid = low + (high-low)/2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] > target) {
            return BinarySearch(arr, low, mid-1, target);
        } else {
            return BinarySearch(arr, mid+1, high, target);
        }   
    }
    return -1;
}

int SirBinarySearch(int arr[], int n, int target) {
    int s = 0, e = n-1;
    while (s <= e) {
        int mid = (s+e)/2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] > target) {
            e = mid-1;
        } else {
            s = mid+1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {-1,0,3,5,9,12};
    int target = 9;
    int result = BinarySearch(arr, 0,  5, target);

    if (result != -1) {
        cout << target << " founded at index: " << result;
    } else {
        cout << target << " Not Found!";
    }
    return 0;
} 