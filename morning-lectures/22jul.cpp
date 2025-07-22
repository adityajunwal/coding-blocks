#include <iostream>
using namespace std;

int* func(){
    int x = 10;
    return &x;
}

int main(){
    // int *ptr = new int;
    // *ptr = 10;
    // int *ptr2 = new int;
    // *ptr2 = 20;
    // cout << *ptr << " " << ptr << endl;
    // cout << *ptr2 << " " << ptr2 << endl;
    // delete ptr2;
    // // cout << ptr2 - ptr << endl;
    // ptr2 = new int;
    // *ptr2 = 30;
    // cout << *ptr2 << " " << ptr2 << endl;
    // return 0;

    int *ptr = func();
    cout << *ptr << endl; 
    /* Error: 22jul.cpp: In function 'int* func()':
       22jul.cpp:5:9: warning: address of local variable 'x' returned [-Wreturn-local-addr]
       int x = 10;
    ^*/
}