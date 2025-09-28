#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N,K;
    cin >> N >> K;
    vector<string> S(N);
    for(int i=0;i<N;i++){
        cin >> S[i];
    }
    int ans = 0;
    for(int bit=0;bit<(1<<N);++bit){
        vector<string> vec;
        for(int i=0;i<N;++i){
            if ( bit & ( 1<<i ) ) {
                vec.push_back(S[i]);
            }
        }
        if ( vec.size() < (unsigned long)K ) {
            continue;
        }
        map<char,int> mp;
        //
        for(int i=0;i<(int)vec.size();i++){
            string &s = vec[i];
            for(auto c : s ) {
                mp[c] += 1;
            }
        }
        int cnt = 0;
        for(auto it : mp ) {
            if ( it.second == K ) {
                cnt += 1;
            }
        }
        //
        ans = max(ans,cnt);
    }
    cout << ans << endl;
    return 0;
}