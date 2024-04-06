#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<pair<long,long>> vec(N);
  for(int i=0;i<N;i++){
    long x,y;
    cin >> x >> y;
    pair<long,long> p = make_pair(x,y);
    vec[i] = p;
  }
  for(int i=0;i<N;i++){
    int ans = -1;
    long x1 = vec[i].first;
    long y1 = vec[i].second;
    long d = 0;
    for(int j=N-1;j>=0;j--){
      if ( i == j ) {
        continue;
      }
      long x2 = vec[j].first;
      long y2 = vec[j].second;
      long tmp = ( x1 - x2 ) * ( x1 - x2 ) + ( y1 - y2 ) * ( y1 - y2 ) ;
      if ( tmp >= d ) {
        d = tmp;
        ans = j;
      }
    }
    cout << ans + 1 << endl;
  }
  return 0;
}
