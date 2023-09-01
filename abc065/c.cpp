#include <bits/stdc++.h>
using namespace std;
const long P = 1e9+7;
int main(void){
  int N,M;
  cin >> N >> M ;
  auto f = [](long v)->long{
    long ret = 1;
    while(v>1){
      ret *= v;
      ret %= P;
      v -= 1;
    }
    return ret;
  };
  long ans = 0;
  long d = abs(N-M);
  if ( d == 0 ) {
    ans = f(N) * f(M);
    ans %= P;
    ans *= 2;
    ans %= P;
  }
  else if ( d == 1 ) {
    ans = f(N) * f(M);
    ans %= P;
  }
  ans %= P ;
  cout << ans << endl;
  return 0;
}
