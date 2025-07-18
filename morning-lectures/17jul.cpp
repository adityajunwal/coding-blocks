#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

void spellNumber(int n, unordered_map<int, string> words){
    if (n > 0){
        int temp = n%10;
        spellNumber(n/10, words);
        cout << words[temp] << " ";
    } return;
}

int main(){

    unordered_map<int, string> words;
    
    words[1] = "one";
    words[2] = "two";
    words[3] = "three";
    words[4] = "four";
    words[5] = "five";
    words[6] = "six";
    words[7] = "seven";
    words[8] = "eight";
    words[9] = "nine";
    words[0] = "zero";
    int n = 986657;
    spellNumber(n, words);
}