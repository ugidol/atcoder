#include <bits/stdc++.h>
using namespace std;
bool func(string &s1, string &s2){
  string s = s1 + s2 ;
  for(int i=0;i<(int)s.size()/2;i++){
    if ( s[i] == s[s.size()-1-i] ) {
      continue;
    }
    else {
      return false;
    }
  }
  return true;
}
int main(void){
  int N;
  cin >> N;
  vector<string> S(N);
  for(int i=0;i<N;i++){
    string s;
    cin >> s;
    S[i] = s;
  }
  string ans = "No";
  for(int i=0;i<N;i++){
    for(int j=i+1;j<N;j++){
      bool b = func(S[i],S[j]);
      if ( b ) {
        ans = "Yes";
        goto eol;
      }
      b = func(S[j],S[i]);
      if ( b ) {
        ans = "Yes";
        goto eol;
      }
    }
  }
eol:
  cout << ans << endl;
  return 0;
}
