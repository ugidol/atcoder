#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  string S;
  cin >> S;
  int ans = -1;
  for(int i=0;i<N-2;i++){
    char a = S[i];
    char b = S[i+1];
    char c = S[i+2];
    if ( a == 'A' && b == 'B' && c == 'C' ) {
      ans = i+1;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
