#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
    ll N,A,B;
    cin >> N >> A >> B;
    ll P,Q,R,S;
    cin >> P >> Q >> R >> S ;
    //
    for(ll i=P;i<=Q;i++){
        for(ll j=R;j<=S;j++){
            char c = '.';
            pair<ll,ll> p = make_pair(i-A,j-B);
            if ( p.first == p.second || p.first == (p.second * -1) ) {
                c = '#';
            }
            cout << c ;
        }
        cout << endl;
    }
    return 0;
}