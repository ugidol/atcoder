#include <bits/stdc++.h>
using namespace std;
long long func(long long n){
 long long ret = 0;
  ret = (1LL+n) * n / 2LL;
  ret %= 998244353LL;
  return ret;
}
int main(void){
  long long N;
  cin >> N;
  string s = to_string(N);
  long long ans = 0LL;
  long long n=0LL;
  for(unsigned long i=0;i<s.size()-1;i++){
    long long v = n ;
    n *= 10LL;
    n += 9LL;
    ans += func(n-v);
    ans %= 998244353LL;
  }
  ans += func(N-n);
  ans %= 998244353LL;
  cout << ans << endl;
  return 0;
}
