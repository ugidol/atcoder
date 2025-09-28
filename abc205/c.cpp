#include <bits/stdc++.h>
using namespace std;
long long int func(long long int a, long long int b){
  long long int ret = 1;
  for(int i=0;i<b;i++){
    ret *= a;
  }
  return ret;
}
int main(void){
  long long int a, b, c ;
  cin >> a >> b >> c ;
  //
  string ans = "=";
  if ( a == b ) {
    ;
  }
  else {
    if ( c % 2 == 0 ) {
      long long int absa = abs(a);
      long long int absb = abs(b);
      if ( absa == absb ) {
        ;
      }
      else if ( absa < absb ) {
        ans = "<";
      }
      else {
        ans = ">" ;
      }
    }
    else {
      if ( a < b ) {
        ans = "<";
      }
      else {
        ans = ">" ;
      }
    }
  }
  cout << ans << endl ;
  return 0;
}
