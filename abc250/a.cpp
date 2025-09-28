#include <bits/stdc++.h>
using namespace std;
int main(void){
    int H,W,R,C;
    cin >> H >> W >> R >> C;
    int ans = 0;
    if ( 1 < R && R < H ) {
        ans += 2;
    }
    else if ( 1 == H ) {
        ans += 0;
    }
    else {
        ans += 1;
    }
    if ( 1 < C && C < W ) {
        ans += 2;
    }
    else if ( 1 == W ) {
        ans += 0;
    }
    else {
        ans += 1;
    }
    cout << ans << endl;
    return 0;
}