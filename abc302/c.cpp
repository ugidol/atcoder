#include <bits/stdc++.h>
using namespace std;
int N,M;
bool func(string &a, string &b){
  int num = 0;
  for(int i=0;i<M;i++){
    if ( a[i] != b[i] ) {
      num += 1;
    }
  }
  if ( num == 1 ) {
    return true;
  }
  else {
    return false;
  }
}
int main(void){
  cin >> N >> M;
  vector<string> S(N);
  for(int i=0;i<N;i++){
    string s;
    cin >> s;
    S[i] = s;
  }
  string ans = "No";
  sort(S.begin(), S.end());
  do {
    bool b = true;
    for(int i=0;i<(int)S.size()-1;i++){
      bool ret = func(S[i],S[i+1]);
      if ( ! ret ) {
        b = false;
      }
    }
    if ( b ) {
      ans = "Yes";
      goto EOL;
    }
  }while(next_permutation(S.begin(), S.end()));
EOL:
  cout << ans << endl;
  return 0;
}
