#include <iostream>
using namespace std;

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
    int arr[] = {0, -1, 2, -4};
    insertionSort(arr, 4);
    for (int x: arr){
        cout << x << " ";
    }
    return 0;
}