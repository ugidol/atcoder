#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N;
    cin >> N;
    string S;
    cin >> S;
    //
    string ans;
    for(int i=0;i<(int)S.size();i++){
        if ( i > 0 && S[i] == 'a' && S[i-1] == 'n' ) {
            ans.push_back('y');
        }
        ans.push_back(S[i]);
    }
    cout << ans << endl;
    return 0;
}