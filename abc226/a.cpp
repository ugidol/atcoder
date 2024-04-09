#include <bits/stdc++.h>
using namespace std ;
int main(void){
  string s ;
  cin >> s ;
  for(size_t i=0;i<s.size();i++){
    if ( s[i] == '.' ) {
      string numstr = s.substr(0,i);
      long l = stoll(numstr) ;
      char c = s[i+1];
      if ( c >= '5' ) {
        l += 1;
      }
      cout << l << endl;
      break;
    }
  }
  return 0;
}
