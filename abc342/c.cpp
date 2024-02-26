#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<char> S(N);
  for(int i=0;i<N;i++){
    char c;
    cin >> c;
    S[i] = c;
  }
  vector<char> vec(26);
  for(char c='a';c<='z';c++){
    vec[c-'a'] = c;
  }
  int Q;
  cin >> Q;
  for(int i=0;i<Q;i++){
    char c,d;
    cin >> c >> d;
    for(char j='a';j<='z';j++){
      if ( vec[j-'a'] == c ) {
        vec[j-'a'] = d;
      }
    }
  }
  for(int i=0;i<N;i++){
    char c = S[i];
    char d = vec[c-'a'];
    S[i] = d;
  }
  string ans(S.begin(), S.end());
  cout << ans << endl;
  return 0;
}
