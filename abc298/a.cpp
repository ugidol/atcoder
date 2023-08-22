#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  string S;
  cin >> S;
  bool b = true;
  int cnt = 0;
  string ans = "No";
  for(int i=0;i<N;i++){
    char c = S[i];
    if ( c == 'x' ) {
      b = false;
    }
    else if ( c == 'o' ) {
      cnt += 1 ;
    }
  }
  if ( b && cnt > 0 ) {
    ans = "Yes";
  }
  cout << ans << endl;
  return 0;
}
