#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
ll VAL = 998244353 ;
int main(void){
    ll N ;
    cin >> N ;
    if ( N % VAL == 0 ) {
        cout << 0 << endl;
        return 0;
    }
    ll ans = 0 ;
    if ( N > 0 ) {
        ans = N % VAL ;
    }
    else {
        ans = VAL + ( N % ( -1 * VAL ) ) ;
    }
    cout << ans << endl;
    return 0;
}