#include <iostream>
#include <string>
#include <random>
#include <cstdlib>
#include <ctime>

using namespace std;


string capitalize(string st) {
    st[0] = toupper(st[0]);
    return st;
}

string zigzagize(string st) {
    for (int i=0; i < st.length(); i++) {
        if (i%2 == 0) st[i] = toupper(st[i]);
        else st[i] = tolower(st[i]);
    }
    return st;
}

bool isPalindrome(string st) {
    int n = st.length();
    int low = 0, high = n-1;

    while (low < high) {
        if (st[low] != st[high]) {
            return false;  
        }
        low++;
        high--;
    }
    return true;
}

bool isPalindromePro(string st) {
    int n = st.length();
    int low = 0, high = n-1;

    while (low < high) {
        if (tolower(st[low]) != tolower(st[high])) {
            return false;  
        }
        low++;
        high--;
    }
    return true;
}

int generateRandomAsciiSmall() {
    srand(time(nullptr));
    return rand() % 26 + 65;
}

string PalindromeGenerator(int n){
    string res = "";
    // random_device rd;
    // mt19937 gen(rd());

    // uniform_int_distribution<> dist(65,65+25);

    for (int i=0; i<n/2; i++) {
        int num = rand() % 26 + 65;
        res += char(num);
    }

    for (int i=n/2; i<=n; i++) {
        res += res[n-i];
    }
    return res;
}

string reverseString(string st, int start, int end) {
    string res = "";
    for (int i=0; i<start; i++) {
        res += st[i];
    }
    for (int i=end; i>=start; i--){
        res += st[i];
    }
    for (int i=end+1; i < st.length(); i++) {
        res += st[i];
    }

    return res;
}


int main() {
    string first = "Aditya";
    string last = "Junwal";

    // cout << first + " " + last << endl;
    // cout << "Len of " << first << " = " << first.length() << endl;
    // cout << "Len of " << last << " = " << last.length() << endl;

    // for (int i=0; i < first.length(); i++) {
    //     // char x;
    //     // if (i%2 == 0) { x = toupper(first[i]); }
    //     // else { x = tolower(first[i]); }
    //     // cout << x << " ";
    //     (i%2 == 0) ? cout << char(toupper(first[i])) : cout << char(tolower(first[i]));

    // } cout << endl;

    // last.append(" Goat ");
    // cout << last << endl;

    // first.insert(2, "C++");
    // cout << first << endl;

    // first.erase(2, 3);
    // cout << first << endl;
    
    // if (last.compare("Junwal goat ") == 0) cout << "Equal" << endl;

    // string upp = capitalize("abcdefghijklmnopqrstuvwxyz");
    // cout << upp << endl;

    // upp = zigzagize(upp);
    // cout << upp << endl;

    // string st1 = "rEdivider";
    // if (isPalindromePro(st1)) {
    //     cout << st1 << " is Palindrome!" << endl;
    // } else {
    //     cout << st1 << " is not a Palindrome!" << endl;
    // }
    // char ch1 = 'A', ch2 = 'z';
    // cout << int(ch1) << endl;
    // cout << int(ch2) << endl;

    // srand(time(0));

    // for (int i=1; i<10; i++) {
    //     string pal = PalindromeGenerator(7);
    //     cout << i << " Pal : " << pal << " ";
    //     isPalindromePro(pal) ? cout << "Palindrome" : cout << "Not a Palindrome";
    //     cout << endl;
    // }

    // char ch1 = '■';
    // cout << int(ch1) << endl;

    string st1 = "1234567890";
    st1 = reverseString(st1, 0, 10);
    cout << st1;
    return 0;
}