#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<int> L(N);
  for(auto &itr:L){
    cin >> itr;
  }
  L.push_back(1e3*2+1);
  sort(L.begin(), L.end());
  //
  unsigned long ans = 0;
  for(int i=0;i<N;i++){
    for(int j=i+1;j<N;j++){
      int a = L[i];
      int b = L[j];
      if ( a > b ) {
        swap(a,b);
      }
      // a - b
      auto p2 = upper_bound(L.begin(), L.end(), b-a );
      unsigned long d2 = distance(L.begin(), p2);
      // a + b
      auto p1 = lower_bound(L.begin(), L.end(), a+b );
      unsigned long d1 = distance(L.begin(), p1);
      long d0 = ( d1 - d2 );
      if ( *p2 <= a && a < *p1 ) {
        d0 -= 1;
      }
      if ( *p2 <= b && b < *p1 ) {
        d0 -= 1;
      }
      if ( d0 > 0 ) {
        ans += d0;
      }
    }
  }
  ans /= 3 ;
  cout << ans << endl;
  return 0;
}
