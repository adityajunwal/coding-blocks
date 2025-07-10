#include <iostream>
#include <unordered_map>
using namespace std;

// Counting sort
int countingSOrt(int arr[], int n, int k){
    // unordered_map<int, int> counts;
    
    // for (int i=0; i<n; i++){
    //     counts[arr[i]]++;
    // }

    // int index = 0;
    // for (int i=0; i<=k; i++){
    //     int current = i;
    //     while (counts[i] > 0){
    //         arr[index++] = current;
    //         counts[i]--;
    //     }
    // }
 
    int count[k+1] = {0};

    for (int i=0; i<n; i++){
        count[arr[i]]++;
    }

    int index = 0;
    for (int i=0; i<=k; i++){
        while (count[i] > 0){
            arr[index++] = i;
            count[i]--;
        }
    }
}


int main(){
    // int x = 10;
    // int *xptr = &x;
    // cout << xptr << endl;
    // xptr++;
    // cout << xptr << endl;

    int arr[] = {1, 0, 3, 2, 3, 1, 2, 0, 2};
    countingSOrt(arr, 9, 3);

    for (int x: arr){
        cout << x << " ";
    } cout << endl;
}