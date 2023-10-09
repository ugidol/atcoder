#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  map<long long, long long> mp;
  for(int i=0;i<N;i++){
    long long s,c;
    cin >> s >> c;
    while( s % 2 == 0 ) {
      s /= 2;
      c *= 2;
    }
    mp[s] += c;
  }
  function<long long(long long)> f = [&](long long v){
    long long ret = 0;
    while(v>0){
      ret += 1;
      long long d = 1;
      while((d*2)<=v){
        d *= 2;
      }
      v -= d;
    }
    return ret;
  };
  long long ans = 0;
  for(auto itr:mp){
    long long k = itr.first;
    long long v = itr.second;
    long long num = f(v);
    ans += num;
  }
  cout << ans << endl;
  return 0;
}
