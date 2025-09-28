#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N;
    cin >> N;
    map<long,long> mp;
    for(int i=0;i<N;i++){
        int a;
        cin >> a;
        mp[a] += 1;
    }
    //
    long ans = 0;
    for(auto it : mp ) {
        long i = it.first;
        for(long j=1;j*j<=i;j++){
            if ( i % j != 0 ){
                continue;
            }
            long k = i / j ;
            if ( j == k ) {
                ans +=  (mp[i] * mp[j] * mp[k]) ;
            }
            else {
                ans +=  (mp[i] * mp[j] * mp[k]) * 2;
            }
        }
    }
    //
    cout << ans << endl;
    return 0;
}