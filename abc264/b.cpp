#include <bits/stdc++.h>
using namespace std;
char tbl[15][16] = {
"BBBBBBBBBBBBBBB" ,
"BWWWWWWWWWWWWWB" ,
"BWBBBBBBBBBBBWB" ,
"BWBWWWWWWWWWBWB" ,
"BWBWBBBBBBBWBWB" ,
"BWBWBWWWWWBWBWB" ,
"BWBWBWBBBWBWBWB" ,
"BWBWBWBWBWBWBWB" ,
"BWBWBWBBBWBWBWB" ,
"BWBWBWWWWWBWBWB" ,
"BWBWBBBBBBBWBWB" ,
"BWBWWWWWWWWWBWB" ,
"BWBBBBBBBBBBBWB" ,
"BWWWWWWWWWWWWWB" ,
"BBBBBBBBBBBBBBB"
};
int main(void){
    int R,C;
    cin >> R >> C ;
    char c = tbl[R-1][C-1];
    string ans ;
    if ( c == 'W' ) {
        ans = "white";
    }
    else {
        ans = "black";
    }
    cout << ans << endl;
    return 0;
}