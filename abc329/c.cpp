
#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  string S;
  cin >> S;
  char cc = S[0];
  long long len = 1;
  vector<vector<long long>> matrix('z'-'a'+1,vector<long long>(2*1e5+1,0));
  matrix[cc-'a'][len] += 1;
  for(int i=1;i<N;i++){
    char c = S[i];
    if ( c == cc ) {
      len += 1;
    }
    else {
      len = 1;
    }
    matrix[c-'a'][len] += 1;
    cc = c;
  }
  long long ans = 0;
  for(auto itr1:matrix){
    for(auto itr2:itr1){
      if ( itr2 > 0 ) {
        ans += 1;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
