#include <bits/stdc++.h>
using namespace std;
int main(void){
  vector<int> S(8);
  for(int i=0;i<8;i++){
    int s;
    cin >> s;
    S[i] = s;
  }
  string ans = "Yes";
  for(int i=0;i<7;i++){
    if ( S[i] > S[i+1] ) {
      ans = "No";
    }
  }
  for(int i=0;i<8;i++){
    if ( S[i] < 100 || S[i] > 675 ) {
      ans = "No";
    }
  }
  for(int i=0;i<8;i++){
    if ( S[i] % 25 != 0 ) {
      ans = "No";
    }
  }
  cout << ans << endl;
  return 0;
}
