#include <iostream>
#include <string>
using namespace std;


int main(){
    int x;
    x = 10;
    cout << x << endl;
    cout << &x << endl;
    cout << sizeof(&x) << endl;

    float y = 3.14;
    cout << y << endl;
    cout << &y << endl;
    cout << sizeof(&y) << endl;

    char z = 'a';
    cout << z << endl;
    cout << &z << endl; // This might print garbage value. use (void*)&z to get the actual memory address
    cout << sizeof(&z) << endl;
}