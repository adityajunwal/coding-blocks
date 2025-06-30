#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i=0; i<n; i++){
        for (int j=1; j<n-i; j++) {
            if (arr[j-1] > arr[j]){
                swap(arr[j-1], arr[j]);
            }
        }
    }


}

void selectionSort(int arr[], int n){
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

int main(){
    int arr[] = {9,8,7,6,5,4,3,2,1};
    bubbleSort(arr, 9);
    for (int x: arr){
        cout << x << ' ';
    }
    return 0;
}