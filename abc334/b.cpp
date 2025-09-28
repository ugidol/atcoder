#include <bits/stdc++.h>
using namespace std;
/* 切り捨て(負の方向への丸め) */
long long div_f(long long x, long long y){
  long long r = ( x % y + y ) % y ;
  long long q = ( x - r ) / y ;
  return q;
}
/* 切り上げ(正の方向への丸め) */
long long div_c(long long x, long long y){
  long long r = ( y - x % y ) % y ;
  long long q = ( x + r ) / y ;
  return q;
}
int main(void){
  long long A,M,L,R;
  cin >> A >> M >> L >> R ;
  L += (0-A);
  R += (0-A);
  long long l = div_c(L,M);
  long long r = div_f(R,M);
  long long ans = (r-l)+1;
  cout << ans << endl;
  return 0;
}
