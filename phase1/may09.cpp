#include <iostream>
using namespace std;

void reverse(int arr[], int n){
    for (int i=n-1; i>-1; i--){
        cout << arr[i] << " ";
    } cout << endl;
}

void printArr(int arr[], int n){
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    } cout << endl;
}


int sol1(int arr[], int n){
    printArr(arr, n);

    int l[n];
    int r[n];

    int max = 0;
    for (int i=0; i<n; i++){
        l[i] = max;
        max = (arr[i] > max) ? arr[i] : max;
    }
    printArr(l, n);

    max = 0;
    for (int i=n-1; i>=0; i--){
        r[i] = max;
        max = (arr[i] > max) ? arr[i] : max;
    }
    printArr(r, n);
    int res = 0;

    for (int i=0; i<n; i++){
        int temp = (l[i] < r[i]) ? l[i] : r[i];
        if (temp - arr[i] > 0){
            res += temp - arr[i];
        }
    }
    return res;
}

int main(){
    // int n = 4;
    // int arr[] = {17, 21, 1, 9};
    // int out[n];
    // int max = -1;


    // for (int i=3; i>=0; i--){
    //     out[3-i] = max; 
    //     max = (arr[i] > max) ? arr[i]: max;
    // }
    // reverse(out, 4);

    int arr[] = {0, 2, 1, 3, 0, 1, 2, 1, 2, 1};
    int n = 10;

    cout << sol1(arr, n);
    return 0;
}