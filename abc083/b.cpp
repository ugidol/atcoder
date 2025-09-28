#include <bits/stdc++.h>
using namespace std ;


int main(void){
  long n ;
  long a ;
  long b ;
  cin >> n ;
  cin >> a ;
  cin >> b ;
  long ret = 0;
  for(int i=1;i<=n;i++){
    string s = to_string(i);
    long val = 0;
    for(int j=0;j<s.size();j++){
      val += int(s[j] - '0');
    }
    if ( val >= a && val <= b ) {
      ret += i;
    }
  }
  cout << ret << endl;
  return 0;
}
