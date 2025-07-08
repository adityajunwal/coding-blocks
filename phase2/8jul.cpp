#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    int arr1[] = {2, 4, 5, 0, 0, 0};
    int arr2[] = {1, 3, 6};
    int m = 3, n = 3;
    
    int k = m + n - 1;
    int i = m-1, j = n-1;
    while (i >= 0 && j >= 0){
        if (arr1[i] > arr2[j]){
            arr1[k] = arr1[i];
            i--;
            k--;
        } else {
            arr1[k] = arr2[j];
            j--;
            k--;
        }
    }

    while (j >= 0) {
        arr1[k] = arr2[j];
        j--;
        k--;
    }

    // for (int x: arr1){
    //     cout << x << " ";
    // }


    int arr[] = {2, 0, 4, 1, 3};
    int arrI[5];

    for (int i=0; i<5; i++){
        arrI[arr[i]] = i;
    }

    for (int x: arr) {
        cout << x << ' ';
    } cout << endl;

    for (int x: arrI) {
        cout << x << ' ';
    } cout << endl;
}