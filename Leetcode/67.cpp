#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string addBinary(string a, string b) {
    int i=a.size()-1;
    int j=b.size()-1;
    int carry=0;
    string ans="";
    while(i>=0 or j>=0){
        int sum=carry;
        if(i>=0){
            sum+=a[i]-'0';
            i--;
        }
        if(j>=0){
            sum+=b[j]-'0';
            j--;
        }
        ans=char(sum%2+'0')+ans;
        carry=sum/2;
    }
    if(carry){
        ans='1'+ans;
    }
    return ans;
}
int main() {
    string a="101";
    string b="11";
    cout<<addBinary(a,b)<<endl;
    return 0;
}