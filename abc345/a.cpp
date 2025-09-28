#include <bits/stdc++.h>
using namespace std;
int main(void){
  string S;
  cin >> S;
  string ans = "No";
  if ( regex_match(S,regex("<=+>")) ){
    ans = "Yes";
  }
  cout << ans << endl;
  return 0;
}
