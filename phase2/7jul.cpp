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

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = 9;
    cout << kadaneSir(arr, n);
    return 0;
}