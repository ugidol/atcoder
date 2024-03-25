#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<int> W(N);
  vector<int> X(N);
  for(int i=0;i<N;i++){
    int w,x;
    cin >> w >> x;
    W[i] = w;
    X[i] = x;
  }
  //
  //
  int ans = 0;
  for(int i=0;i<24;i++){
    int sm = 0;
    for(int j=0;j<N;j++){
      int x = ( X[j] + i ) % 24;
      if ( x >= 9 && x < 18 ) {
        sm += W[j];
      }
    }
#ifdef DEBUG
    fprintf(stderr,"%d,%d\n",i,sm);
#endif
    ans = max(ans,sm);
  }
  cout << ans << endl;
  return 0;
}
