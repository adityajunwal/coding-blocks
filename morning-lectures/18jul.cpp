#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high){
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int left[n1];
    int right[n1];

    for (int i=0; i<n1; i++){
        left[i] = arr[low+i];
    }

    for (int i=0; i<n2; i++){
        right[i] = arr[mid+1+i];
    }

    int i=0, j=0, k = low;
    while (i < n1 && j < n2){
        if (left[i] < right[j]){
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }

    while (i < n1){
        arr[k++] = left[i++];
    }
    while (j < n2){
        arr[k++] = right[j++];
    }

}

void mergesort(int arr[], int low, int high){
    if (low < high){
        int mid = low + (high - low) / 2;
        mergesort(arr, low, mid);
        mergesort(arr, mid+1, high);
        
        merge(arr, low, mid, high);
    }
}

int main(){
    int arr[] = {5,4,3,2,1};
    mergesort(arr, 0, 5);
    for (int x: arr){
        cout << x << " ";
    }
}