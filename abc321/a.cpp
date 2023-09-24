#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  string s = to_string(N);
  string ans = "Yes";
  for(int i=1;i<(int)s.size();i++){
    char prev = s[i-1];
    char c = s[i];
    if ( prev <= c ) {
      ans = "No";
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
