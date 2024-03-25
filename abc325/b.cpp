
#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<int> W(N);
  vector<int> X(N);
  for(int i=0;i<N;i++){
    cin >> W[i] >> X[i];
  }
  int ans = 0;
  for(int t=0;t<=24;t++){
    int x = 0;
    for(int i=0;i<N;i++){
      int y = ( X[i] + t ) % 24 ;
      if ( y >= 9 && y < 18 ) {
        x += W[i];
      }
    }
    ans = max(ans,x);
  }
  cout << ans << endl;
  return 0;
}
