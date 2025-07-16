#include <iostream>
using namespace std;

// Recursive Linear Search
int search(int arr[], int n, int target, int i=0){
    if (i == n){
        return -1;
    }
    if (arr[i] == target){
        return i;
    } 
    return search(arr, n, target, i+1);
}

// Recursive binary search
int binarySearch(int arr[], int target, int low, int high){
    if (low <= high){
        int mid = (low + high) / 2;
        if (arr[mid] == target){
            return mid;
        } else if (arr[mid] < target){
            return binarySearch(arr, target, mid+1, high);
        } else {
            return binarySearch(arr, target, low, mid-1);
        }
    }   
    return -1;
}

int main(){
    int arr[] = {1,2,3,6,6,6,7,8,9};
    int n = 9;
    cout << binarySearch(arr, 7, 0, n-1);
    return 0;
}