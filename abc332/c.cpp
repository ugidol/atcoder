#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,M;
  cin >> N >> M;
  string S;
  cin >> S;
  S.push_back('0');
  map<char,int> mp;
  int ans = 0;
  for(int i=0;i<=N;i++){
    char c = S[i];
    if ( c == '0' ) {
      ans = max(ans, mp['2'] + max(0,mp['1']-M));
      mp['1'] = 0;
      mp['2'] = 0;
    }
    else {
      mp[c] += 1;
    }
  }
  cout << ans << endl;
  return 0;
}
