#include <bits/stdc++.h>
using namespace std;
int main(void){
  long N;
  cin >> N;
  long ans = 0;
  for(long i=1;i*i*i<=N;i++){
    long x = i*i*i;
    string s = to_string(x);
    bool b = true;
    for(long j=0;j<(long)s.size()/2;j++){
      if ( s[j] != s[ s.size() - 1 - j ] ) {
        b = false;
        break;
      }
    }
    if ( b ) {
      ans = max(ans,x);
    }
  }
  cout << ans << endl;
  return 0;
}
