#include <iostream>
using namespace std;


// Recursive function for Multiplying two numbers [Optimized]
int multiply(int x, int y){
    // cout << "x: " << x << " y: " << y << endl;
    if (x == 0 || y == 0) { return 0; } 
    if (x > y){ return x + multiply(x, y-1);}
    else { return y + multiply(x-1, y); }
    
}

// Print Increasing numbers till 'n' recursively
void printIncreasing(int n){
    if (n == 0){
        return;
    } printIncreasing(n-1);
    cout << n << " ";

}

// Print decreasing recursively
void printDecreasing(int n){
    if (n == 0){
        return;
    } 
    cout << n;
    printIncreasing(n-1);
}


// Sum of an array using recursion 
int sumOfArray(int arr[], int n){
    if (n == 0){
        return 0;
    }
    return arr[n-1] + sumOfArray(arr, n-1);
}

int main(){
    // cout << multiply(2, 10);
    // printIncreasing(10);
    // cout << endl;
    // printDecreasing(10);
    int arr[] = {1, 2, 3, 4, 5};
    cout << sumOfArray(arr, 5);
    return 0;
}