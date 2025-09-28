#include <bits/stdc++.h>
using namespace std;
int main(void){
  long long N,M;
  cin >> N >> M;
  vector<long long> L(N);
  long long mn = 0;
  long long mx = 0;
  for(auto &itr:L){
    cin >> itr;
    mn = max(mn,itr);
    mx += itr;
    mx += 1;
  }
  mx -= 1;
  function<long long(long long)> f = [&](long long w){
    long long ret = 1;
    long long tmp = L[0];
    for(int i=1;i<N;i++){
      long long l = L[i];
      if ( tmp + 1 + l <= w ) {
        tmp += (1 + l);
      }
      else {
        tmp = l;
        ret += 1;
      }
    }
    return ret;
  };
  long long ans = 0;
  long long left = mn-1;
  long long right = mx;
  long long mid = ( left + right ) / 2 ;
  while(abs(right-left)>1){
    mid = ( left + right ) / 2 ;
    long long m = f(mid);
    if ( m > M ) {
      left = mid;
    }
    else {
      right = mid;
    }
  }
  ans = right;
  cout << ans << endl;
  return 0;
}
