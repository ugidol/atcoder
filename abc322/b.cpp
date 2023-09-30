#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,M;
  cin >> N >> M;
  string S,T;
  cin >> S >> T;
  string prefix = T.substr(0,S.size());
  string postfix = T.substr(T.size()-S.size(),S.size());
  int ans = 3;
  if ( S == prefix && S == postfix ) {
    ans = 0;
  }
  else if ( S == prefix ) {
    ans = 1;
  }
  else if ( S == postfix ) {
    ans = 2;
  }
  cout << ans << endl;
  return 0;
}
