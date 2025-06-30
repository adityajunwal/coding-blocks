// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     for (int i = 0; i < n; i++){
//         for (int j=1; j<=i+1; j++){
//             cout << j;
//         }
//         for (int j=i+1; j<n; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
// 	int n;
// 	cin >> n;
// 	for (int i=1; i <= n; i++){
// 		for (int j=0; j < n-i; j++){
// 			cout << "\t";
// 		}
// 		for (int j=i; j<i*2; j++){
// 			cout << j << "\t";
// 		}

// 		for (int j = (i-1)*2; j >= i; j--){
// 			cout << j << "\t";
// 		}

// 		cout << endl;
// 	}
// 	return 0;
// }

#include<iostream>
using namespace std;

// int main() {
// 	int n;
// 	cin >> n;

// 	int arr[n];
// 	for (int i=0; i<n; i++){
// 		cin >> arr[i];
// 	}

// 	for (int x: arr){
// 		cout << x << " ";
// 	}

// 	for (int i=0; i<n; i++){
// 		swap(arr[i], arr[arr[i]]);
// 	}

// 	for (int x: arr){
// 		cout << x << " ";
// 	}
// }

// int main(){
// 	int arr[] = {1,2,3,4};
// 	cout << arr[-1];
// 	return 0;
// }

/*
* * * * * * * * * 
* * * *   * * * *
* * *       * * *
* *           * *
*               *
* *           * *
* * *       * * *
* * * *   * * * *
* * * * * * * * *
*/

/*
int main (){
	int n = 9;
	// cout << "Enter the Value of n: ";
	// cin >> n;

	for (int i=0; i<=n/2 ; i++){
		for (int j=0; j <= n/2-i; j++){
			cout << "* ";
		}
		for (int j=0; j<2*i-1; j++){
			cout << "  ";
		}
		if (i == 0){
			for (int j=1; j <= n/2-i; j++){
				cout << "* ";
			}
		} else {
			for (int j=0; j <= n/2-i; j++){
				cout << "* ";
			}
		}
		cout << endl;
	}

	for (int i=n/2-1; i>=0; i--){
		for (int j=0; j <= n/2-i; j++){
			cout << "* ";
		}
		for (int j=0; j<2*i-1; j ++){
			cout << "  ";
		}
		if (i == 0){
			for (int j=1; j <= n/2-i; j++){
				cout << "* ";
			}
		} else {
			for (int j=0; j <= n/2-i; j++){
				cout << "* ";
			}
		}
		cout << endl;
	}
	
}
*/

/*  
                1 
            2 1   1 2
        3 2 1       1 2 3
    4 3 2 1           1 2 3 4
5 4 3 2 1               1 2 3 4 5
    4 3 2 1           1 2 3 4
        3 2 1       1 2 3
            2 1   1 2
                1


int main(){
	int n = 5;

	for (int i=0; i<n; i++){
		for (int j=2; j<n*2-2*i; j++){
			cout << "  ";
		}
		for (int j = i+1; j>=1; j--){
			cout << j << " ";
		}
		for (int j=0; j<2*i-1; j++){
			cout << "  ";
		}
		if (i != 0){
			for (int j=1; j<=i+1; j++){
				cout << j << " ";
			}
		}
		cout << endl;
	}

	for (int i=n-2; i>=0; i--){
		for (int j=2; j<n*2-2*i; j++){
			cout << "  ";
		}
		for (int j = i+1; j>=1; j--){
			cout << j << " ";
		}
		for (int j=0; j<2*i-1; j++){
			cout << "  ";
		}
		if (i != 0){
			for (int j=1; j<=i+1; j++){
				cout << j << " ";
			}
		}
		cout << endl;
	}

	return 0;
}

*/

int main(){
	int arr[5] = {1,2,3,4,5};
	cout << arr << endl; 
	cout << &arr[1];
	return 0;
}