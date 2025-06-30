#include <iostream>
using namespace std;

// SELECTION SORT
void selectionSort(int arr[],int n){
    for (int i=0; i<n-1; i++){
        int min = i;
        for (int j=i+1; j<n; j++){
            if (arr[j] < arr[min]){
                min = j;
            }
        }
        if (min != i){ swap(arr[i], arr[min]); }
    }
}

// INSERTION SORT
void insertionSort(int arr[], int n){
    for (int i=1; i<n; i++){
        int key = arr[i];
        int j = i-1;
        while (j >= 0 && key < arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

}

//BUBBLE SORT
void bubbleSort(int arr[], int n){
    for (int i=0; i<n; i++){
        bool noSwap = true;
        for (int j=1; j<n-i; j++){
            if (arr[j-1] > arr[j]){
                swap(arr[j-1], arr[j]);
                noSwap = false;
            }
        }
        if (noSwap){
            break;
        }

    }
}

// MERGE SORT
void merge(int arr[], int low, int mid, int high){
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int L[n1];
    int R[n2];

    for (int i=0; i<n1; i++){
        L[i] = arr[low+i];
    }

    for (int i=0; i<n2; i++){
        R[i] = arr[mid+1+i];
    }

    int i=0, j=0, k = low;
    while (i < n1 && j < n2){
        if (L[i] <= R[j]){
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }
    
    while (i < n1){
        arr[k++] = L[i++];
    }
    while (j < n2){
        arr[k++] = R[j++];
    }

}

void mergerSort(int arr[], int low, int high){
    if (low < high){
        int mid = low + (high - low) / 2;
        mergerSort(arr, low, mid);
        mergerSort(arr, mid+1, high);

        merge(arr, low, mid, high);
    }
}

// QUICK SORT
int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <  high; j++){
        if (arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i+1], arr[high]);

    return i + 1;
}

void quickSort(int arr[], int low, int high){
    if (low < high){
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi-1);
        quickSort(arr, pi+ 1, high);
    }
}


int main(){
    int arr1[9] = {9,8,6,7,5,4,3,2,1};

    bubbleSort(arr1, 9);

    for (auto i: arr1){
        cout << i <<" ";
    }
    return 0;
}