#include <bits/stdc++.h>
using namespace std;
int main(void){
  string S;
  cin >> S;
  string ans = "No";
  regex re("A*B*C*");
  if ( regex_match(S,re) ) {
    ans = "Yes";
  }
  cout << ans << endl;
  return 0;
}
