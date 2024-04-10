#include <bits/stdc++.h>
using namespace std;
int main(void){
    vector<int> x(4);
    vector<int> y(4);
    cin >> x[0] >> y[0];
    cin >> x[1] >> y[1];
    cin >> x[2] >> y[2];
    if ( x[0] == x[1] ){
        x[3] = x[2];
    }
    else if ( x[0] == x[2] ) {
        x[3] = x[1];
    }
    else {
        x[3] = x[0];
    }
    if ( y[0] == y[1] ){
        y[3] = y[2];
    }
    else if ( y[0] == y[2] ) {
        y[3] = y[1];
    }
    else {
        y[3] = y[0];
    }
    cout << x[3] << ' ' << y[3] << endl;
    return 0;
}