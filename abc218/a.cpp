#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n ;
  cin >> n;
  string s;
  cin >> s;
  string ans = "No";
  if ( s[n-1] == 'o' ) {
    ans = "Yes";
  }
  cout << ans << endl;
  return 0;
}
