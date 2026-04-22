#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int compress(vector<char>& chars) {
    int n = chars.size();
    int index = 0;
    for (int i = 0; i < n; ) {
        char curr = chars[i];
        int count = 0;
        while (i < n && chars[i] == curr) {
            i++;
            count++;
        }
        chars[index++] = curr;
        if (count > 1) {
            string cnt = to_string(count);
            for (char c : cnt) {
                chars[index++] = c;
            }
        }
    }

    return index;
}
int main() {
    vector<char> chars={'a','a','b','b','b','c'};
    cout<<compress(chars)<<endl;
    return 0;
}