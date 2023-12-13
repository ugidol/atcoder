#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,S,K;
  cin >> N >> S >> K;
  int ans = 0;
  for(int i=0;i<N;i++){
    int P,Q;
    cin >> P >> Q ;
    ans += ( P * Q );
  }
  if ( ans < S ) {
    ans += K;
  }
  cout << ans << endl;
  return 0;
}
