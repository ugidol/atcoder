#include <bits/stdc++.h>
using namespace std;
int main(void){
  string S;
  cin >> S;
  map<char,int> mp;
  bool lower = false;
  bool upper = false;
  for(auto c:S){
    mp[c] += 1;
    if ( c >= 'a' && c <= 'z' ) {
      lower = true;
    }
    else if ( c >= 'A' && c <= 'Z' ) {
      upper = true;
    }
  }
  bool b = true;
  for(auto itr:mp){
    if ( itr.second > 1 ) {
      b = false;
    }
  }
  string ans = "No";
  if ( b && lower && upper ) {
    ans = "Yes";
  }
  cout << ans << endl;
  return 0;
}
