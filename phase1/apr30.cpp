#include <iostream>
using namespace std;

void mySwap(int* a , int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


void bubbleSort(int arr[], int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<n-i-1; j++){
            if (arr[j] > arr[j+1]){
                mySwap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main(){
    int x = 10;
    int y = 20;

    mySwap(&x,&y);

    cout << "x: " << x << " y: " << y << endl;

    int arr[] = {9,8,7,6,5,4,3,2,1};
    bubbleSort(arr, 9);

    for (auto e: arr){
        cout << e << " ";
    }
    cout << endl;
    return 0;
}