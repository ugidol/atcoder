#include <bits/stdc++.h>
using namespace std ;

bool func(int a, int b, int c, int n){
  if ( ( a * b * c ) <= n ) {
    return true;
  }
  return false;
}

int main(void){
  long long n ;
  cin >> n ;
  //--
  long long ans = 0;
  for(long long a=1;a*a*a<=n;a++){
    for(long long b=a;a*b*b<=n;b++){
      ans += ( ( n / a / b ) - b + 1 );
    }
  }
  cout << ans << endl ;
  return 0;
}
