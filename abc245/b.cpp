#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<int> A(N);
  for(int i=0;i<N;i++){
    cin >> A[i];
  }
  int ans = 0;
  for(int i=0;i<=2000;i++){
    bool b = true;
    for(auto a:A){
      if ( i == a ) {
        b = false;
        break;
      }
    }
    if ( b ) {
      ans = i;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
