#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool isPrime(int num){
    
    if (num == 0 or num == 1) {
        return false;
    }

    for (int i=2; i < sqrt(num); i++ ){
        if (num%i == 0){
            return false;
        }
    }
    return true;
}

int fibbo (int t){
    if (t == 1) return 0;
    if (t == 2) return 1;
    return fibbo(t-1) + fibbo(t-2);
}

vector<long long> memo(100, -1);  // You can increase the size if needed

long long fibonacci(int n) {
    if (n <= 1)
        return n;

    // Check if already calculated
    if (memo[n] != -1)
        return memo[n];

    // Store the result before returning
    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return memo[n];
}

int main(){

    // for (int i=0; i < 20; i++){
    //     //isPrime(i) ? cout << i << " is Prime!\n" << endl : cout << i << " is Composite!\n" << endl;
    //     if (isPrime(i)) {
    //         cout << i << " is Prime!" << endl;
    //     }
    // }
    // return 0;

    for (int i=1; i <= 100; i++){
        cout << fibonacci(i) << " ";
    }
    cout << endl;

}