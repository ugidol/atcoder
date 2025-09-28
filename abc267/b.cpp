#include <bits/stdc++.h>
using namespace std;
bool func(string &s, vector<int> &vec){
    bool ret = false;
    for(auto it : vec ) {
        if ( s[it] == '1' ) {
            ret = true;
        }
    }
    return ret;
}
int main(void){
    vector<vector<int>> vec(7,vector<int>());
    vec[0] = {6};
    vec[1] = {3};
    vec[2] = {1,7};
    vec[3] = {0,4};
    vec[4] = {2,8};
    vec[5] = {5};
    vec[6] = {9};
    string S;
    cin >> S;
    string ans = "No";
    if ( S[0] == '0' ) {
        for(int i=0;i<7;i++){
            bool b = func(S, vec[i]);
            if ( b != true ) {
                continue;
            }
            bool prev = b;
            for(int j=i+1;j<7;j++){
                bool b2 = func(S, vec[j]);
                if ( b2 == true && prev != true ) {
                    ans = "Yes";
                    goto loop_end;
                }
                prev = b2;
            }
        }
loop_end:
        ;
    }
    cout << ans << endl;
    return 0;
}