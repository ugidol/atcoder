#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n;
  cin >> n;
  map<string,int> mp;
  for(int i=0;i<n;i++){
    string s;
    cin >> s;
    mp[s] += 1;
  }
  //
  string ans;
  int tmp = 0;
  for(auto it : mp){
    if ( it.second > tmp ) {
      tmp = it.second;
      ans = it.first;
    }
  }
  //
  cout << ans << endl;
  return 0;
}
