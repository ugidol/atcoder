#include <bits/stdc++.h>
using namespace std;
int main(void){
    int A,B,C,D,E,F,X;
    cin >> A >> B >> C >> D >> E >> F >> X ;
    int a = ( X / ( A + C ) ) * A * B ;
    int b = ( X / ( D + F ) ) * D * E ;
    a += min(A, (X%(A+C))) * B;
    b += min(D, (X%(D+F))) * E;
    string ans;
    if ( a == b ) {
        ans = "Draw";
    }
    if ( a > b ) {
        ans = "Takahashi";
    }
    if ( a < b ) {
        ans = "Aoki";
    }
    cout << ans << endl;
    return 0;
}