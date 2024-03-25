#include <bits/stdc++.h>
using namespace std;
const string s = "wbwbwwbwbwbw";
int main(void){
  int W,B;
  cin >> W >> B;
  int len = W+B;
  string ans = "No";
  for(int i=0;i<(int)s.size();i++){
    int w = 0;
    int b = 0;
    for(int j=0;j<len;j++){
      char c = s[(i+j)%s.size()];
      if ( c == 'w' ) {
        w += 1;
      }
      else {
        b += 1;
      }
    }
    if ( w == W && b == B ) {
      ans = "Yes";
    }
  }
  cout << ans << endl;
  return 0;
}
