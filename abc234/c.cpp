#include <bits/stdc++.h>
using namespace std;
int main(void){
    long K;
    cin >> K;
    string tmp;
    // 変換ループ
    // 0になるまで繰り返し
    while(K>0){
        // 剰余
        if ( K % 2 == 0 ){
            tmp.insert(tmp.begin(),'0');
        }
        else {
            tmp.insert(tmp.begin(),'2');
        }
        // 割る
        K /= 2;
    }
    string ans = tmp;
    cout << ans << endl;
    return 0;
}