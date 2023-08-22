#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  string S;
  cin >> S;
  int ans = -1 ;
  bool A,B,C;
  A = false;
  B = false;
  C = false;
  for(int i=0;i<N;i++){
    char c = S[i];
    if ( c == 'A' ) {
      A = true;
    }
    else if ( c == 'B' ) {
      B = true;
    }
    else if ( c == 'C' ) {
      C = true;
    }
    //
    if ( A && B && C ) {
      ans = i + 1;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
