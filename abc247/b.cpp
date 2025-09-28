#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N;
    cin >> N;
    vector<pair<string,string>> vec(N);
    for(int i=0;i<N;i++){
        string s;
        cin >> s;
        string t;
        cin >> t;
        pair<string,string> p = make_pair(s,t);
        vec[i] = p;
    }
    string ans = "Yes";
    for(int i=0;i<N;i++){
        pair<string,string> &a = vec[i];
        bool flg_1 = false;
        bool flg_2 = false;
        for(int j=0;j<N;j++){
            if ( i == j ) {
                continue;
            }
            pair<string,string> &b = vec[j];
            if ( a.first == b.first || a.first == b.second ) {
                flg_1 = true;
            }
            if ( a.second == b.first || a.second == b.second ) {
                flg_2 = true;
            }
        }
        if ( flg_1 && flg_2 ) {
            ans = "No";
            goto out_of_loop;
        }
    }
    out_of_loop:
    cout << ans << endl;
    return 0;
}