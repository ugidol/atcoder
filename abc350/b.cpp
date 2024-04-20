#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,Q;
  cin >> N >> Q ;
  vector<int> T(Q);
  for(int i=0;i<Q;i++){
    cin >> T[i];
    T[i] -= 1;
  }
  vector<bool> vec(N,true);
  for(int i=0;i<Q;i++){
    int x = T[i];
    vec[x] = ( ! vec[x] ) ;
  }
  int ans = 0;
  for(auto itr:vec){
    if ( itr ) {
      ans += 1;
    }
  }
  cout << ans << endl;
  return 0;
}
