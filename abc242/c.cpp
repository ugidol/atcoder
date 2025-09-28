#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N;
    cin >> N;
    //
    vector<vector<long>> tbl = {
        { 0 ,2 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,2 ,0 },
        { 0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 },
    };

    for(int i=2;i<N;i++){
        for(int j=1;j<=9;j++){
            tbl[1][j] += tbl[0][j-1] ;
            tbl[1][j] %= 998244353;
            tbl[1][j] += tbl[0][j  ] ;
            tbl[1][j] %= 998244353;
            tbl[1][j] += tbl[0][j+1] ;
            tbl[1][j] %= 998244353;
        }
        for(int j=1;j<=9;j++){
            tbl[0][j] = tbl[1][j];
            tbl[1][j] = 0;
        }
    }
    long ans = 0;
    for(int i=1;i<=9;i++){
        ans += tbl[0][i];
        ans %= 998244353;
    }
    cout << ans << endl;
    return 0;
}