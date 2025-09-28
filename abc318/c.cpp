#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ll N,D,P;
  cin >> N >> D >> P ;
  vector<ll> F(N);
  for(auto &f:F){
    cin >> f;
  }
  sort(F.begin(), F.end(), greater<int>());
  ll ans = 0;
  ll sm = 0;
  for(int i=0;i<N;i++){
    sm += F[i];
    if ( (i+1) % D == 0 ) {
      ans += min(sm,P);
      sm = 0;
    }
  }
  ans += min(sm,P);
  cout << ans << endl;
  return 0;
}
