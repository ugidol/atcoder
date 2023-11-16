#include <bits/stdc++.h>
using namespace std;
int main(void){
  string S;
  cin >> S;
  map<int,long long> mp;
  int k = 0;
  mp[k] += 1;
  for(int i=0;i<(int)S.size();i++){
    char c = S[i];
    int b = ( 1 << ( c - '0' ) );
    k ^= b;
    mp[k] += 1;
  }
  long long ans = 0;
  for(auto itr:mp){
    long long n = itr.second;
    ans += ( n * ( n - 1 ) / 2 );
  }
  cout << ans << endl;
  return 0;
}
