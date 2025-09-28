#include <bits/stdc++.h>
using namespace std;
int main(void){
  int a,b,c;
  cin >> a >> b >> c ;
  int ans = 0 ;
  while(ans<=1000){
    ans += c ;
    if ( ans >= a && ans <= b ) {
      cout << ans << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}
