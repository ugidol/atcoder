#include <bits/stdc++.h>
using namespace std;
int main(void){
    string s;
    cin >> s;
    map<char,int> mp;
    for(auto it : s){
        mp[it] += 1;
    }
    if ( mp.size() == 1 ) {
        cout << "-1" << endl;
    }
    else {
        for(auto it : mp ){
            if ( it.second == 1 ) {
                cout << it.first << endl;;
                break;
            }
        }
    }
    return 0;
}