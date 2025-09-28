#include <bits/stdc++.h>
using namespace std;
int main(void){
  int x;
  cin >> x;
  string ans = "";
  if ( x >= 90 ) {
    ans = "expert";
  }
  else if ( x >= 70 ) {
    ans = to_string(90-x);
  }
  else if ( x >= 40 ) {
    ans = to_string(70-x);
  }
  else {
    ans = to_string(40-x);
  }
  cout << ans << endl;
  return 0;
}
