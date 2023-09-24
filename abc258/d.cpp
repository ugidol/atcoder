#include <bits/stdc++.h>
using namespace std;
int main(void){
  long long N,X;
  cin >> N >> X ;
  vector<vector<long long>> vec(N,vector<long long>(2));
  for(auto &itr:vec){
    cin >> itr[0] >> itr[1];
  }
  vector<long long> A(N);
  A[0] = vec[0][0] + vec[0][1];
  vector<long long> B(N);
  B[0] = vec[0][1] * ( X - 1 ) ;
  for(long long i=1;i<N;i++){
    A[i] = A[i-1] + vec[i][0] + vec[i][1];
    B[i] = vec[i][1] * ( X - 1 - i ) ;
    if ( B[i] < 0 ) {
      B[i] = 0;
    }
  }
  long long ans = 9e18;
  for(long long i=0;i<N;i++){
    ans = min(ans, A[i]+B[i]);
  }
  cout << ans << endl;
  return 0;
}
