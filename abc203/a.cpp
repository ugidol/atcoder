#include <bits/stdc++.h>
using namespace std;
int main(void){
  int a,b,c;
  cin >> a >> b >> c ;
  int ans = 0;
  if ( a != b && b != c && a != c ) {
    ;
  }
  else {
    ans = a;
    if ( a == b ) {
      ans = c;
    }
    else if ( a == c ) {
      ans = b;
    }
  }
  cout << ans << endl;
  return 0;
}
