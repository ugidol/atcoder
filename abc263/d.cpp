#include <bits/stdc++.h>
using namespace std;
int main(void){
    long N,L,R;
    cin >> N >> L >> R;
    vector<long> A(N+1);
    for(int i=1;i<=N;i++){
        cin >> A[i];
    }
    // y を固定
    long ans = N * R ;
    long sum = 0;
    for(int i=1;i<=N;i++){
        long a = A[i];
        long left1 = sum + a;
        long left2 = (i) * L;
        sum = min(left1,left2);
        //
        long right = (N-(i)) * R ;
        ans = min(ans,sum+right);
    }
    cout << ans << endl;
    return 0;
}