#include <iostream>
using namespace std;


// Recursive function for Multiplying two numbers [Optimized]
int multiply(int x, int y){
    // cout << "x: " << x << " y: " << y << endl;
    if (x == 0 || y == 0) { return 0; } 
    if (x > y){ return x + multiply(x, y-1);}
    else { return y + multiply(x-1, y); }
    
}

int main(){
    cout << multiply(2, 10);
    return 0;
}