#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
int main(void){
  ll N,A,B;
  cin >> N >> A >> B;
  string S;
  cin >> S;
  ll ans = A*N + B*N ;
  /*
   *
   */
  for(int i=0;i<N;i++){
    /*
     *
     */
    ll cnt = 0;
    for(int j=0;j<(N/2);j++){
      ll left = ( i + j ) % N ;
      ll right = ( N - 1 - j + i ) % N ;
      if ( S[left] != S[right] ) {
        cnt += 1;
      }
    }
    ll tmp = A*i + B*cnt;
    ans = min(ans,tmp);
  }
  cout << ans << endl;
  return 0;
}
