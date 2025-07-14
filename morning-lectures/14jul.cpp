#include <iostream>
using namespace std;

/*
    Today's topics:
        - Recursion
            - Factorial
*/

// Recursive function for Fibbonacci series [Highly unoptimized though]
int fibbo(int x){
    if (x == 1){
        return 0;
    } if (x == 2){
        return 1;
    }
    return fibbo(x-1) + fibbo(x-2);
}

// Recursive Function for Recursion
int factorial(int x){
    if (x <= 1){
        return 1;
    } 
    return x * factorial(x-1);
}


int main(){
    // for (int i=1; i<11; i++){
    //     cout << "Factorial of " << i << " is: " << factorial(i) << endl;
    // }
    cout << fibbo(15);
}