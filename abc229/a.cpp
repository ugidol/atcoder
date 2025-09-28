#include <bits/stdc++.h>
using namespace std;

int main(void){
  string s1, s2 ;
  cin >> s1 >> s2 ;
  string ans = "Yes";
  if ( s1 == "#." && s2 == ".#" ) {
    ans = "No";
  }
  else if ( s1 == ".#" && s2 == "#." ) {
    ans = "No";
  }
  cout << ans << endl;
  return 0;
}
