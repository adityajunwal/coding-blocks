#include <iostream>
#include <vector>
using namespace std;

void printSubsequences(vector<int> &arr) {
    int n = arr.size();
    int total = 1 << n;  // 2^n subsequences

    for (int mask = 0; mask < total; ++mask) {
        cout << "For Mask" << " ( " << mask << " ) " << ": ";
        cout << "[";
        bool first = true;
        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i)) {  // If the i-th bit is set
                if (!first) cout << ", ";
                cout << arr[i];
                first = false;
            }
        }
        cout << "]" << endl;
    }
}

int main() {
    vector<int> arr = {1, 2, 3};
    printSubsequences(arr);
    return 0;
}
