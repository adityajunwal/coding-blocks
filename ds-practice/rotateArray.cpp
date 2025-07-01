#include <iostream>
using namespace std;

void reverseArray(int arr[], int low, int high){
    while (low < high) {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

void rotateArray(int arr[], int n, int k) {
    reverseArray(arr, 0, n-1);
    reverseArray(arr, 0, k-1);
    reverseArray(arr, k, n-1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    rotateArray(arr, 9, 8);

    for (int x: arr) {
        cout << x << " ";
    } cout << endl;
}