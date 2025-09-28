#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long;
int main(void){
  ull n,k;
  cin >> n >> k ;
  vector<ull> vec(n);
  for(ull i=0;i<n;i++){
    cin >> vec[i] ;
  }
  vector<ull> s(n+1);
  for(ull i=0;i<n;i++){
    s[i+1] = s[i] + vec[i];
  }
  //
  ull ans = 0;
  map<ull,ull> mp;
  for(ull i=1;i<=n;i++){
    ull key = s[i-1];
    mp[key] += 1 ;
    ans += mp[s[i]-k] ;
  }
  cout << ans << endl; 
  return 0;
}
