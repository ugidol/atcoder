#include <bits/stdc++.h>
using namespace std;
int main(void){
  string S;
  cin >> S;
  int B_xy = 0;
  for(int i=0;i<(int)S.size();i++){
    char c = S[i];
    if ( c == 'B' ) {
      B_xy += i;
    }
  }
  bool first = false;
  if ( B_xy % 2 == 1 ) {
    first = true;
  }
  bool second = false;
  bool in_R = false ;
  for(int i=0;i<(int)S.size();i++){
    char c = S[i];
    if ( c == 'R' ) {
      in_R = ! in_R;
    }
    else if ( c == 'K' ) {
      if ( in_R ) {
        second = true;
        break;
      }
    }
  }
  string ans = "No";
  if ( first && second ) {
    ans = "Yes";
  }
  cout << ans << endl;
  return 0;
}
