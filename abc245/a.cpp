#include <bits/stdc++.h>
using namespace std;
int main(void){
    int A,B,C,D;
    cin >> A >> B >> C >> D;
    if ( A == C ) {
        if ( B == D ) {
            cout << "Takahashi" << endl;
            return 0;
        }
        if ( B < D ) {
            cout << "Takahashi" << endl ;
            return 0;
        }
        if ( B > D ) {
            cout << "Aoki";
            return 0;
        }
    }
    if ( A < C ) {
        cout << "Takahashi" << endl;
        return 0;
    }
    if ( A > C ) {
        cout << "Aoki" << endl;
        return 0;
    }
    return 0;
}