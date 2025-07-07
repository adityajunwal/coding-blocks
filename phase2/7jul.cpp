#include <iostream>
#include <algorithm>
using namespace std;


int kadaneAlgo(int arr[], int n){
    int res = arr[0];
    int maxEnd = arr[0];

    for (int i=1; i<n; i++){
        maxEnd = max(arr[i], maxEnd + arr[i]);
        res = max(maxEnd, res);

        // cout << "i: " << i << endl;
        // cout << "MaxEnd: " << maxEnd << endl;
        // cout << "Res: " << res << endl << endl;
    }

    return res;
}

int kadaneSir(int arr[], int n){
    int x[n];
    int res = arr[0];
    x[0] = arr[0];

    for (int i=1; i<n; i++){
        x[i] = max(x[i-1] + arr[i], arr[i]);
        res = max(x[i], res);
    }

    return res;
}

void print2Pairs(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        for (int j=i+1; j < n; j++){
            cout << "[" << arr[i] << ", " << arr[j] << "]" << endl;
        }
    }
}

void print3Pairs(int arr[], int n){
    for (int i=0; i<n-2; i++){
        for (int j=i+1; j<n-1; j++){
            for (int k=j+1; k<n; k++){
                cout << "[" << arr[i] << ", " << arr[j] << ", " << arr[k] << "]" << endl;
            }
        }
    }
}


void merge(int arr1[], int arr2[], int n, int m){
    int i = 0;
    int j = 0;
    int arr[n+m];
    int k = 0;
    while (i < n && j < m){
        if (arr1[i] < arr2[j]){
            arr[k++] = arr1[i++];
        } else {
            arr[k++] = arr2[j++];
        }
    }

    while (i < n){
        arr[k++] = arr1[i++];
    }

    while (j < m){
        arr[k++] = arr2[j++];
    }

    for (int x: arr){
        cout << x << " ";
    } cout << endl;

}

int main() {
    int arr1[] = {10, 30, 50, 0, 0, 0};
    int arr2[] = {20, 40, 60};
    merge(arr1, arr2, 3, 3);
    return 0;
}