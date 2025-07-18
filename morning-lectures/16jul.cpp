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
        int mid = low + (high - low) / 2;
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

// Print All occurances
void searchAll(int arr[], int n, int target, int i=0){
    if (i == n){
        return ;
    }
    if (arr[i] == target){
        cout << i << " ";
    } 
    searchAll(arr, n, target, i+1);
}

// Check if an array is sorted in ascending order
bool isSorted(int arr[], int n, int i=0){
    if (i < n-1){
        if (arr[i] > arr[i+1]){
            return false;
        }
        return isSorted(arr, n, i+1);
    } return true;
}



int main(){
    int arr[] = {1,2,3,6,6,6,7,1,9};
    int n = 9;
    // searchAll(arr, n, 6);
    cout << binarySearch(arr, 3, 0, n-1);
    return 0;
}