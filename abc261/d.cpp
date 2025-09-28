#include <bits/stdc++.h>
using namespace std;
static long INF = -1;
int main(void){
    int N,M;
    cin >> N >> M;
    vector<long> X(N);
    for(int i=0;i<N;i++){
        cin >> X[i];
    }
    map<int,int> bonus;
    for(int i=0;i<M;i++){
        int c,y;
        cin >> c >> y;
        bonus[c] = y;
    }
    vector<vector<long>> dp(N+1,vector<long>(N+1,-1));
    dp[0][0] = 0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            long v = dp[i][j];
            if ( v == INF ) {
                continue;
            }
            dp[i+1][0] = max(dp[i+1][0],v);
            dp[i+1][j+1] = max(dp[i+1][j+1], v + X[i] + bonus[j+1]);
        }
    }
    //
    long ans = *max_element(dp[N].begin(), dp[N].end());
    cout << ans << endl;
    return 0;
}