#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N ;
    cin >> N;
    vector<int> P(N+1);
    for(int i=2;i<=N;i++){
        cin >> P[i];
    }
    int ans = 1;
    int idx = N;
    while(true){
        idx = P[idx];
        if ( idx == 1 ) {
            break;
        }
        ans += 1;
    }
    cout << ans << endl;
    return 0;
}