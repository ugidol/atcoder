#include <bits/stdc++.h>
using namespace std;
int main(void){
  string S;
  cin >> S;
  int n = stoi(S.substr(3,6));
  string ans = "No";
  if ( n >= 1 && n <= 349 ) {
    if ( n != 316 ) {
      ans = "Yes";
    }
  }
  cout << ans << endl;
  return 0;
}
