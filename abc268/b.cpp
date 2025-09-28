#include <bits/stdc++.h>
using namespace std;
int main(void){
  string S,T;
  cin >> S >> T;
  string ans = "Yes";
  if ( S.size() > T.size() ) {
    ans = "No";
  }
  else {
    for(int i=0;i<(int)S.size();i++){
      if ( S[i] != T[i] ) {
        ans = "No";
        break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
