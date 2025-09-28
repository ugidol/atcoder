#include <bits/stdc++.h>
using namespace std;
int main(void){
    int Y;
    cin >> Y ;
    int rmdr = Y % 4 ;
    int ans = Y;
    if ( rmdr == 0 ){
        ans += 2;
    }
    else if ( rmdr == 1 ) {
        ans += 1;
    }
    else if ( rmdr == 2 ) {
        ans += 0;
    }
    else if ( rmdr == 3 ) {
        ans += 3;
    }
    cout << ans << endl;
    return 0;
}
// 0 1 2 3 
// 2 1 0 3