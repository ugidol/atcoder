#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  map<string,int> mp;
  for(int i=0;i<N;i++){
    string s;
    cin >> s;
    string rev(s.rbegin(), s.rend());
    string key = min(s,rev);
    if ( mp.find(s) == mp.end() && mp.find(rev) == mp.end() ) {
      mp[key] = 0;
    }
    else {
      mp[key] += 1;
    }
  }
  int ans = (int)mp.size();
  cout << ans << endl;
  return 0;
}
