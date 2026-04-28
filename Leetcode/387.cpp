#include <iostream>
#include <unordered_map>
using namespace std;

int firstUniqChar(string s) {
    unordered_map<char, int> freq;

    for(char ch : s) {
        freq[ch]++;
    }

    for(int i = 0; i < s.length(); i++) {
        if(freq[s[i]] == 1) {
            return i;
        }
    }

    return -1;
}

int main() {
    string s;
    cin >> s;

    cout << firstUniqChar(s) << endl;

    return 0;
}