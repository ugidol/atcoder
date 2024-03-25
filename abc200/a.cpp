#include <bits/stdc++.h>
using namespace std;
long long floor(long long x, long long y){
  long long r = ( x % y + y ) % y ;
  long long q = ( x - r ) / y ;
  return q;
}
int main(void){
  int N;
  cin >> N;
  int ans = floor(N+99,100);
  cout << ans << endl;
  return 0;
}
