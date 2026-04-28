#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mp;

    for(string str : strs) {
        string sortedStr = str;
        sort(sortedStr.begin(), sortedStr.end());
        mp[sortedStr].push_back(str);
    }

    vector<vector<string>> result;

    for(auto pair : mp) {
        result.push_back(pair.second);
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    vector<string> strs(n);

    for(int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    vector<vector<string>> ans = groupAnagrams(strs);

    for(auto group : ans) {
        for(string word : group) {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}