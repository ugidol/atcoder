#include <bits/stdc++.h>
using namespace std;
int main(void){
  int K,G,M;
  cin >> K >> G >> M;
  int g = 0;
  int m = 0;
  for(int i=0;i<K;i++){
    if ( g == G ) {
      g = 0;
    }
    else if ( m == 0 ) {
      m = M;
    }
    else {
      int v = 0;
      v = min(m,G-g);
      g += v;
      m -= v;
    }
  }
  cout << g << ' ' << m << endl;
  return 0;
}
