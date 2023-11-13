
#include <bits/stdc++.h>
using namespace std;
long long conv(string S){
  long long v = 0;
  for(char c:S){
    v *= 2;
    if ( c == '1'){
      v += c - '0';
    }
  }
  return v;
}
bool f(string S, long long N){
  long long v = conv(S);
  return v <= N ;
}
int main(void){
  string S;
  cin >> S;
  long long N;
  cin >> N;
  for(int i=0;i<(int)S.size();i++){
    char c = S[i];
    if ( c == '?' ) {
      S[i] = '1';
      if ( ! f(S,N) ) {
        S[i] = '0';
      }
    }
  }
  long long ans = conv(S);
  if ( ans > N ) {
    ans = -1;
  }
  cout << ans << endl;
  return 0;
}
