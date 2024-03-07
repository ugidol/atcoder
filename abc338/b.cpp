#include <bits/stdc++.h>
using namespace std;
int main(void){
  string S;
  cin >> S;
  map<char,int> mp;
  for(int i=0;i<(int)S.size();i++){
    mp[ S[i] ] += 1;
  }
  int cnt = -1;
  for(char c='a';c<='z';c++){
    cnt = max(cnt,mp[c]);
  }
  char ans = ' ';
  for(char c='a';c<='z';c++){
    if ( mp[c] == cnt ) {
      ans = c;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
