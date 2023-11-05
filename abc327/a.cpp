#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  string S;
  cin >> S;
  string ans = "No";
  for(int i=0;i<(N-1);i++){
    char a = S[i];
    char b = S[i+1];
    if ( ( a == 'a' && b == 'b' ) || ( a == 'b' && b == 'a' ) ) {
      ans = "Yes";
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
