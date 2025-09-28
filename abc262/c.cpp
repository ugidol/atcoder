#include <bits/stdc++.h>
using namespace std;
int main(void){
    long N ;
    cin >> N;
    vector<pair<long,long>> vec(N+1);
    long same = 0;
    for(long i=0;i<N;i++){
        long a ;
        cin >> a;
        pair<long,long> p = make_pair(i+1,a);
        vec[i+1] = p;
        if ( p.first == p.second ) {
            same += 1;
        }
    }
    //
    long ans = (long)(same * ( same - 1) / 2);
    for(long i=1;i<=N;i++){
        pair<long,long> p1 = vec[i];
        if ( p1.first < p1.second ) {
            pair<long,long> p2 = vec[p1.second];
            if ( p1.first == p2.second ) {
                ans += 1;
            }
        }
    }
    //
    cout << ans << endl;
    //
    return 0;
}