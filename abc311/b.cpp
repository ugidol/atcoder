#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,D;
  cin >> N >> D;
  string S('o',D+1);
  S[D] = 'x';
  vector<string> vec(N);
  for(auto &s : vec){
    cin >> s;
    for(int i=0;i<D;i++){
      char c = s[i];
      if ( c == 'x' ) {
        S[i] = 'x';
      }
    }
  }
  int ans = 0;
  int left = 0;
  int right = 0;
  for(left=0;left<D;left++){
    if ( S[left] == 'x' ) {
      continue;
    }
    right = left;
    for(; right<D && S[right] != 'x' ; right++ ){
    }
    ans = max(ans,right-left);
    left = right;
  }
  cout << ans << endl;
  return 0;
}
