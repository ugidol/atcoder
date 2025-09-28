#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N,M;
    cin >> N >> M;
    map<int,vector<int>> mp;
    for(int i=0;i<M;i++){
        int u,v;
        cin >> u >> v;
        if ( u > v ) {
            swap(u,v);
        }
        mp[u].push_back(v);
        mp[v].push_back(u);
    }
    int ans = 0;
    for(auto it : mp){
        int a = it.first;
        vector<int> b_vec = it.second;
        for(auto b : b_vec){
            if ( a >= b ) {
                continue;
            }
            vector<int> c_vec = mp[b];
            for(auto c : c_vec ) {
                if ( b >= c ) {
                    continue;
                }
                vector<int> d_vec = mp[c];
                for(auto d : d_vec ) {
                    if ( a == d ) {
                        ans += 1;
                    }
                }
            }
        }
    }
    //
    cout << ans << endl;
    //
    return 0;
}