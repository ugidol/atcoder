#include <bits/stdc++.h>
using namespace std;
int main(void){
  string S;
  cin >> S;
  vector<int> vec('z'-'a'+1);
  long ans = 0;
  vec[ S[0]-'a' ] += 1;
  for(int i=1;i<(int)S.size();i++){
    char c = S[i];
    long v = i - vec[c-'a'] ;
    ans += v;
    vec[c-'a'] += 1;
  }
  for(int i=0;i<(int)vec.size();i++){
    if ( vec[i] > 1 ) {
      ans += 1;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
