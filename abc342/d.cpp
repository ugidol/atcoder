#include <bits/stdc++.h>
using namespace std;
long long f(int n){
  int v = n;
  if ( v == 0 ) {
    return v;
  }
  vector<pair<int,int>> vec;
  for(int i=2;i*i<=v;i++){
    if ( v % i != 0 ) {
      continue;
    }
    int e = 0;
    while(v%i==0){
      v /= i;
      e += 1;
    }
    vec.push_back({i,e});
  }
  if ( v > 1 ) {
    vec.push_back({v,1});
  }
  long long ret = 1;
  for(auto itr:vec){
    if ( itr.second % 2 == 0 ) {
      continue;
    }
    ret *= (long long)itr.first ;
  }
  return ret;
}
int main(void){
  int N;
  cin >> N;
  vector<int> A(N);
  for(int i=0;i<N;i++){
    cin >> A[i];
  }
  long long ans = 0;
  map<long long,long long> mp;
  for(int i=0;i<N;i++){
    int x = f( A[i] ) ;
    mp[x] += 1;
  }
  for(auto itr:mp){
    if ( itr.first == 0 ) {
      ans += ( ( (long)N * ( (long)N - 1 ) / 2 ) - ( ( ( (long)N - itr.second ) * ( (long)N - itr.second - 1 ) ) / 2 ) );
    }
    else {
      ans += ( ( itr.second * ( itr.second - 1 ) ) / 2 ) ;
    }
  }
  cout << ans << endl;
  return 0;
}
