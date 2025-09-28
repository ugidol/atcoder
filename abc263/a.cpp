#include <bits/stdc++.h>
using namespace std;
int main(void){
    int A,B,C,D,E;
    cin >> A >> B >> C >> D >> E ;
    map<int,int> mp;
    mp[A] += 1 ;
    mp[B] += 1 ;
    mp[C] += 1 ;
    mp[D] += 1 ;
    mp[E] += 1 ;
    string ans = "No";
    if ( mp.size() == 2 ) {
        int mx = 0;
        for(auto it : mp){
            mx = max(mx,it.second);
        }
        if ( mx == 3 ) {
            ans = "Yes";
        }
    }
    cout << ans << endl;
    return 0;
}
