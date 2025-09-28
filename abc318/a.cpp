#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,M,P;
  cin >> N >> M >> P;
  int ans = 0;
  for(int i=1;i<=N;i++){
    if ( i < M ) {
      continue;
    }
    if ( ( i - M ) % P == 0 ) {
      ans += 1;
    }
  }
  cout << ans << endl;
  return 0;
}
