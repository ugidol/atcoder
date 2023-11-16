#include <bits/stdc++.h>
using namespace std;
int main(void){
  string S;
  cin >> S;
  map<int,int> mp;
  long long ans = 0;
  int k = 0;
  mp[k] += 1;
  for(int i=0;i<(int)S.size();i++){
    char c = S[i];
    int b = ( 1 << ( c - '0' ) );
    k ^= b;
    ans += mp[k];
    mp[k] += 1;
  }
  cout << ans << endl;
  return 0;
}
