#include <bits/stdc++.h>
using namespace std;
int main(void){
  string S;
  cin >> S;
  map<char,int> mp;
  for(int i=0;i<(int)S.size();i++){
    char c = S[i];
    mp[c] += 1;
  }
  int ans = 0;
  for(auto itr:mp){
    if ( itr.second == 1 ) {
      for(int i=0;i<(int)S.size();i++){
        if ( S[i] == itr.first ) {
          ans = i + 1;
          break;
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}
