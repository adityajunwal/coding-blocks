#include <iostream>
using namespace std;

// Recursive
int gcdR(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcdR(b, a%b);
}

int gcdI(int a, int b) {
    while (b > 0) {
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

int lcm (int a, int b) {
    int gcd = gcdR(a, b);
    
    return (a / gcd) * b; 
}

int main() {
    cout << gcdR(20, 12) << endl;
    cout << lcm(20,12) << endl;
    cout << gcdI(7, 5) << endl;

}