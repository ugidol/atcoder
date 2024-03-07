#include <bits/stdc++.h>
using namespace std;
int main(void){
  string S;
  cin >> S;
  bool ans = true;
  if ( S[0] >= 'A' && S[0] <='Z' ) {
  }
  else {
    ans = false;
  }
  for(int i=1;i<(int)S.size();i++){
    if ( S[i] >= 'a' && S[i] <= 'z' ) {
    }
    else {
      ans = false;
    }
  }
  if ( ans ) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
  return 0;
}
