#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N;
    // 整数Ｎの受取
    cin >> N;
    // 2N+1分の配列を用意
    vector<bool> vec(2*N+1+1,false);
    //
    cout << "1" << endl;
    vec[1] = true;
    //
    /* */
    while(true){
        int v;
        cin >> v;
        vec[v] = true;
        // 0 が入力されたら、高橋君の勝ち
        if ( v == 0 ) {
            break;
        }
        // 使える数字を探すループ...
        for(size_t i=1;i<vec.size();i++){
            // trueは使用済みの数字
            if ( vec[i] == true ) {
                continue;
            }
            vec[i] = true;
            cout << i << endl;
            break;
        }
    }
    return 0;
}