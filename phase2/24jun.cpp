#include <iostream>
using namespace std;

bool IsEven(int num) {
    return num%2 == 0;
}

int mul(int a, int b) {
    return a*b;
}

void increment(int *a){
    ++*a;
}

int main() {
    // IsEven(6) ? cout << "Even!" : cout << "Odd!";
    // int num;
    // cout << "Enter the number: ";
    // cin >> num;

    // for (int i=1; i<=10; i++){
    //     cout << num << " * " << i << " = " << mul(num,i) << endl;
    // }

    int x = 10;
    cout << "Before Increment: " << x << endl; 
    increment(&x);
    increment(&x);
    cout << "After Increment twice: " << x ; 
}






















