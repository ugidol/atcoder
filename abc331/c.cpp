#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
int main(void){
  ll N;
  cin >> N;
  vector<ll> A(N);
  vector<ll> B(N);
  for(ll i=0;i<N;i++){
    ll a;
    cin >> a;
    A[i] = a;
    B[i] = A[i];
  }
  sort(B.begin(),B.end());
  vector<ll> C(N);
  C[0] = B[0];
  for(ll i=1;i<N;i++){
    C[i] = C[i-1] + B[i];
  }
  for(ll i=0;i<N;i++){
    ll v = A[i] ;
    auto itr = upper_bound(B.begin(), B.end(), v);
    size_t pos = distance(B.begin(), itr);
    ll ans = C[N-1] - C[pos-1];
    cout << ans << ' ' ;
  }
  cout << endl;
  return 0;
}
