#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,P,Q;
  cin >> N >> P >> Q ;
  int ans = P;
  for(int i=0;i<N;i++){
    int d;
    cin >> d;
    ans = min(ans,d+Q);
  }
  cout << ans << endl;
  return 0;
}
