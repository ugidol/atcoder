#include <bits/stdc++.h>
using namespace std;
int main(void){
    string S;
    cin >> S;
    int ans = 0;
    if ( S == "Monday" ) {
        ans = 5;
    }
    if ( S == "Tuesday" ) {
        ans = 4;
    }
    if ( S == "Wednesday" ) {
        ans = 3;
    }
    if ( S == "Thursday" ) {
        ans = 2;
    }
    if ( S == "Friday" ){
        ans = 1;
    }
    cout << ans << endl;
    return 0;
}