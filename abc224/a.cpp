#include <bits/stdc++.h>
using namespace std;

int main(void){
  string s ;
  cin >> s ;
  size_t len = s.size();
  if ( s[len-2] == 'e' ) {
    cout << s.substr(len-2) << endl ;
  }
  else {
    cout << s.substr(len-3) << endl ;
  }
  return 0;
}
