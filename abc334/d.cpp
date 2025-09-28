#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,Q;
  cin >> N >> Q;
  vector<int> R(N);
  for(int i=0;i<N;i++){
    cin >> R[i];
  }
  sort(R.begin(), R.end());
  vector<long long> S(N+1);
  S[0] = 0;
  for(int i=1;i<(N+1);i++){
    S[i] = S[i-1] + R[i-1];
  }
  for(int i=0;i<Q;i++){
    long long X;
    cin >> X;
    auto itr = upper_bound(S.begin(), S.end(), X);
    long long ans = 0;
    if ( itr == S.begin() && X < *itr ) {
      ;
    }
    else {
      if ( *itr == X ) {
      }
      else {
        itr--;
      }
      ans = (long long)distance(S.begin(),itr);
    }
    cout << ans << endl;
  }
  return 0;
}
