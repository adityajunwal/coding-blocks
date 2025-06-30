#include <iostream>
using namespace std;

int main(){

    // for (int i=0; i < 5; i++){
    //     for (int j=1; j <= 5-i; j++){
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // for (int i=1; i <= 5; i++){
    //     for (int j=5; j>=1; j++){
    //         cout << i;
    //     }
    // }

    // for (int i=1; i <= 5; i++){
    //     for (int j=1; j <= 5-i+1; j++){
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    for (int i=1; i <= 5; i++){
        for (int j=1; j<=i; j++){
            cout << i;
        }
    }

    return 0;
}