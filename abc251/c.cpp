#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N;
    cin >> N;
    set<string> org;
    int mx = -1;
    vector<string> S(N);
    vector<int> T(N);
    vector<bool> O(N);
    for(int i=0;i<N;i++){
        string s;
        cin >> s;
        S[i] = s;

        int t;
        cin >> t;
        T[i] = t;
        bool o = false;
        if ( org.find(s) == org.end() ) {
            org.insert(s);
            o = true;
            if ( t > mx ) {
                mx = t;
            }
        }
        O[i] = o;
    }
    int ans = -1;
    for(int i=0;i<N;i++){
        if ( T[i] == mx && O[i] == true ) {
            ans = i + 1;
            break;
        }
    }
    //
    cout << ans << endl;
    //
    return 0;
}