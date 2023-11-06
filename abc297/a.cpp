#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  int D;
  cin >> D;
  vector<int> T(N);
  for(int i=0;i<N;i++){
    cin >> T[i] ;
  }
  int ans = -1;
  for(int i=0;i<(N-1);i++){
    if ( T[i+1] - T[i] <= D ) {
      ans = T[i+1];
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
