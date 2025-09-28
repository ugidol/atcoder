#include <bits/stdc++.h>
using namespace std;

int main(void){
  string s ;
  cin >> s ;
  int i = s.find(".");
  string x = s.substr(0,i);
  int y = atoi(s.substr(i+1).c_str());
  char z = ' ' ;
  if ( 0 <= y && y <= 2 ) {
    z = '-';
  }
  else if ( 3 <= y && y <= 6 ) {
    z = ' ';
  }
  else if ( 7 <= y && y <= 9 ) {
    z = '+';
  }
  cout << x << z << endl;
  return 0;
}
