#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,H,X;
  cin >> N >> H >> X;
  int ans = 0;
  for(int i=0;i<N;i++){
    int P;
    cin >> P;
    if ( ( H + P ) >= X ) {
      ans = i + 1;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
