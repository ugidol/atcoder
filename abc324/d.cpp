#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  string S;
  cin >> S;
  vector<int> vec1(10);
  for(char c:S){
    vec1[c-'0'] += 1;
  }
  long long ans = 0;
  for(long long i=0;(i*i)<1e13;i++){
    string x = to_string(i*i);
    vector<int> vec2(10);
    for(char c:x){
      vec2[c-'0'] += 1;
    }
    bool b = true;
    for(int i=1;i<10;i++){
      if ( vec1[i] != vec2[i] ) {
        b = false;
        break;
      }
    }
    if ( ! b ) {
      continue;
    }
    if ( vec1[0] < vec2[0] ) {
      continue;
    }
    ans += 1;
  }
  cout << ans << endl;
  return 0;
}
