#include <bits/stdc++.h>
using namespace std;
int main(void){
    int A,B,C,X;
    cin >> A >> B >> C >> X ;
    if ( X <= A ) {
        cout << 1.0 << endl;
        return 0;
    }
    if ( X > B ) {
        cout << 0.0 << endl;
        return 0;
    }
    cout << (double)C /(double)( B - A ) << endl ;
    return 0;
}