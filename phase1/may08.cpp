#include <iostream>
using namespace std;

int main(){
    int n = 3, m = 2;
    int arr1[n] = {1,2,3};
    int arr2[m] = {4,6};

    int arr3[n+m];

    for (int i=0; i<n+m; i++){
        if (i < n){
            arr3[i] = arr1[i];
        } else {
            arr3[i] = arr2[i-n];
        }
    }

    for (int x=0; x<5; x++){
        cout << arr3[x] << " ";
    }

    return 0;
}











