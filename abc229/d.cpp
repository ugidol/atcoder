#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(void){
  string s;
  cin >> s;
  int k;
  cin >> k;
  ull len = s.size();
  vector<int> vec(len+1);
  for(ull i=0;i<len;i++){
    if ( s[i] == '.' ) {
      vec[i+1] = vec[i] + 1;
    }
    else {
      vec[i+1] = vec[i];
    }
  }
  //
  ull ans = 0 ;
  ull r=0;
  for(ull l=0;l<len;l++){
    while( r < len && vec[r+1] - vec[l] <= k ){
      r += 1;
    }
    ans = max(ans,r-l);
  }
  //
  cout << ans << endl;
  //
  return 0;
}
