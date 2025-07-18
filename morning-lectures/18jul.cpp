#include <iostream>
using namespace std;

// MERGE SORT
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

// QUICKSORT
int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low - 1;
    for (int j=low; j < high; j++){
        if (arr[j] < pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i + 1;
}

void quicksort(int arr[], int low, int high){
    if (low < high){
        int pivot = partition(arr, low, high);
        quicksort(arr, low, pivot-1);
        quicksort(arr, pivot+1, high);
    }
}

int main(){
    int arr[] = {5,4,3,2,1};
    quicksort(arr, 0, 5);
    for (int x: arr){
        cout << x << " ";
    }
}