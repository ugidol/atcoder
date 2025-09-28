#include <bits/stdc++.h>
using namespace std;
int main(void){
  string s;
  cin >> s;
  size_t len = s.size();
  for(size_t i=0;i<len;i++){
    char c = s[len-i-1];
    if ( c == '6' ) {
      c = '9';
    }
    else if ( c == '9' ) {
      c = '6';
    }
    cout << c;
  }
  cout << endl;
  return 0;
}
