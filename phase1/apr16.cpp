#include <iostream>
using namespace std;

int main()
{
    int n, state;
    cout << "Enter the Number: ";
    cin >> n;

    // for (i=0; i < n; i++){
    //     for ( j=0; j < n-i; j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // for (int i=1; i<n+1; i++){
    //     if (i%2 == 0){
    //         state = 0;
    //         for (int j=0; j<i; j++){
    //             cout << state;
    //             state = (state == 0) ? 1 : 0;
    //         }

    //     } else {
    //         state = 1;
    //         for (int j=0; j<i; j++){
    //             cout << state;
    //             state = (state == 0) ? 1 : 0;
    //         }
    //     }
    //     cout << endl;
    // }
    //
    // for (int i=1; i < n+1; i++){
    //     for (int j = 1; j < i+1; j++){
    //         cout << j;
    //     }
    //     cout << endl;
    // }5

    // for (int i=1; i <= n; i++) {
    //     for (int j = n-i; j> i ; j--){
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // for (int i=1; i <= n; i++) {
    //     for (int j=1; j <= n-i; j ++){
    //         cout << " ";
    //     }

    //     for (int j = i; j < 2*i; j++) {
    //         cout << j;
    //     }

    //     for (int j=2*i - 2; j >= i; j--){
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i <= n; i++){
    //     if (i == 1 or i == n){
    //         for (int j=0; j < n; j++){
    //             cout << "* ";
    //         }
    //     }
    //     else {
    //         cout << "* ";
    //         for (int j = 1; j < n-1; j++){
    //             cout << "  ";
    //         }
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i <= n; i++){
    //     for (int j = 0; j < n-i; j++) {
    //         cout << " ";
    //     }
    //     char st = '*';
    //     for (int j = 0; j < 2*i - 1; j++) {
    //         cout << st;
    //         st = (st == '*') ? ' ' : '*';
    //     }
    //     cout << endl;
    // }

    int res = 0;
    int x = 1;
    while (n > 0) {
        res = (n%10*x) + res;
        n = n/10;
        x = x*10;
    }
    
    cout <<  res;

    return 0;
}