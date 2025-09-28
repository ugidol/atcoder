#include <bits/stdc++.h>
using namespace std;
int main(void){
    int v,a,b,c;
    cin >> v >> a >> b >> c ;
    v %= (a+b+c);
    if ( v < a ) {
        cout << 'F' << endl;
        return 0;
    }
    v -= a;
    if ( v < b ) {
        cout << 'M' << endl;
        return 0;
    }
    v -= b;
    if ( v < c ) {
        cout << 'T' << endl;
        return 0;
    }

    return 0;
}