#include <bits/stdc++.h>
using namespace std;
int main(void){
  unsigned long long  l,r;
  cin >> l >> r ;
  l -= 1 ;
  r -= 1 ;
  string s;
  cin >> s;
  string ans = s;
  for(size_t i=0;i<s.size();i++){
    if ( ( i >= l ) && ( i <= r ) ) {
      ans[i] = s[l+r-i] ;
    }
    else {
      ans[i] = s[i];
    }
  }
  cout << ans << endl;
  return 0;
}
