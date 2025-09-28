#include <bits/stdc++.h>
using namespace std;
int main(void){
    string s;
    cin >> s;
    map<char,int> mp;
    mp['0'] = 0;
    mp['1'] = 0;
    mp['2'] = 0;
    mp['3'] = 0;
    mp['4'] = 0;
    mp['5'] = 0;
    mp['6'] = 0;
    mp['7'] = 0;
    mp['8'] = 0;
    mp['9'] = 0;

    for(unsigned long i=0;i<s.size();i++){
        char c = s[i];
        mp[c] += 1;
    }
    char ans ;
    for(auto it : mp ) {
        if ( it.second == 0 ) {
            ans = it.first;
        }
    }
    cout << ans << endl;
    return 0;
}