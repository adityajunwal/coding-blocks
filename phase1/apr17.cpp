#include <iostream>
using namespace std;

int main(){
    // char a;
    // cout << "Enter the character: ";
    // cin >> a;
    // int ord = int(a);

    // if (ord >= 65 and ord <=65+25) {
    //     cout << a << " is Capital Case.";
    // } else if (ord >= 97 and ord <=97+25 ) {
    //     cout << a << " is Small Case.";
    // }
    
    // int ord;
    // cout << "Enter the ASCII Value: ";
    // cin >> ord;

    // for (int i = 1; i < 10001; i++) {
    //     cout << i << " is: " << char(i) << endl;
    // }
    // int a = 10;
    // int b = 10;
    // cout << &a << endl;
    // cout << &b;

    // return 0;

    int n;
    cout << "Enter the Number: ";
    cin >> n;

    for (int i=0; i < n; i++) {
        for (int j=65; j < 65 + n-i; j++) {
            cout << char(j);
        }
        for (int j=65+n-i-1; j >= 65; j-- ) {
            cout << char(j);
        }
        cout << endl;

    }

}

