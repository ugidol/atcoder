#include <bits/stdc++.h>
using namespace std;
int main(void){
  string S;
  cin >> S;
  string ans = "Yes";
  for(int i=2;i<=16;i++){
    if ( i % 2 == 1 ) {
      continue;
    }
    if ( S[i-1] == '1' ) {
      ans = "No";
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
