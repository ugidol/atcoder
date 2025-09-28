#include <bits/stdc++.h>
using namespace std;
long func(vector<int> &vec, unsigned long length){
    long ret = 0;
    for(unsigned long i=0;i<length;i++){
        ret += ( (i+1) * vec[i] );
    }
    return ret;
}
int main(void){
    long N,M;
    cin >> N >> M;
    vector<int> A(N);
    for(int i=0;i<N;i++){
        cin >> A[i] ;
    }
    vector<long> B(N+1,LONG_MIN);
    for(int i=0;i<N;i++){
        B[i+1] = B[i] + A[i];
    }
    //
    long sm = func(A,M);
    long ans = sm;
    for(int i=0;i<N-M;i++){
        sm -= (B[i+M]-B[i]);
        sm += ( A[i+M] * M ) ;
        ans = max(ans,sm);
    }
    cout << ans << endl;
    return 0;
}