#include <bits/stdc++.h>
using namespace std;
int main(void){
    string s;
    cin >> s;
    map<char,int> mp;
    bool upper = false;
    bool lower = false;
    for(size_t i=0;i<s.size();i++){
        char c = s[i];
        mp[c] += 1;
        if ( c >= 'a' && c <= 'z' ) {
            lower = true;
        }
        if ( c >= 'A' && c <= 'Z' ) {
            upper = true;
        }
    }
    string ans = "Yes";
    for(auto it : mp){
        if ( it.second > 1 ) {
            ans = "No";
            break;
        }
    }
    if ( lower == false ) {
        ans = "No";
    }
    if ( upper == false ) {
        ans = "No";
    }
    cout << ans << endl;
    return 0;
}