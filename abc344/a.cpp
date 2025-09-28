#include <bits/stdc++.h>
using namespace std;
int main(void){
  string S;
  cin >> S;
  bool b = true;
  for(int i=0;i<(int)S.size();i++){
    char c = S[i];
    if ( c == '|' ) {
      if ( b ) {
        b = false;
      }
      else {
        b = true;
      }
      continue;
    }
    if ( b ) {
      cout << c ;
    }
  }
  cout << endl;
  return 0;
}
