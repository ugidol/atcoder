#include <bits/stdc++.h>
using namespace std;
int main(void){
  long long N;
  cin >> N;
  map<long long,long long> mp;
  long long ans = 0;
  function<long long(long long)> f = [&](long long v){
    if ( v <= 1 ) {
      return (long long)0;
    }
    if ( mp.find(v) != mp.end() ) {
      return mp[v];
    }
    else {
      long long ret = 0;
      ret += v;
      ret += f(v/2);
      ret += f((v+2-1)/2);
      mp[v] = ret;
      return ret;
    }
  };
  ans = f(N);
  cout << ans << endl;
  return 0;
}
