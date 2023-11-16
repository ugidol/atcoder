#include <bits/stdc++.h>
using namespace std;
int main(void){
  string S;
  cin >> S;
  vector<map<char,int>> vec(S.size()+1);
  for(int i=0;i<(int)S.size();i++){
    char c = S[i];
    if ( i > 0 ) {
      for(char cc='0';cc<='9';cc++){
        vec[i][cc] = vec[i-1][cc];
      }
    }
    vec[i][c] += 1;
  }
  long long ans = 0;
  for(int l=0;l<(int)S.size()+1;l++){
    for(int r=l+1;r<(int)S.size()+1;r++){
      bool b = true;
      for(char c='0';c<='9';c++){
        int num = vec[r][c] - vec[l][c];
        if ( num % 2 == 0 ) {
          continue;
        }
        else {
          b = false;
          break;
        }
      }
      if ( b ) {
        ans += 1;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
