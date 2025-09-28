#include <bits/stdc++.h>
using namespace std;
int main(void){
    int L,R;
    cin >> L >> R;
    string s = "atcoder";
    string ans = s.substr(L-1,R-L+1);
    cout << ans << endl;
    return 0;
}