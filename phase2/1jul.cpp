#include <iostream>
using namespace std;

int main() {

    int arr[] = {10, 20, 30, 40, 50};

    for (int i=0; i<5; i++) {
        for (int j=i; j<5; j++) {
            bool first = true;
            for (int k=i; k<=j; k++) {
                if (first) {cout << "[" << arr[k]; first = false;}

                else {cout << ", " << arr[k]; }
            } cout << "]" << endl;
        } cout << endl;
    }
}

/*


*/