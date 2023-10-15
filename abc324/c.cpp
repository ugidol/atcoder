#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  string T;
  cin >> T;
  vector<string> S(N);
  for(auto &itr:S){
    cin >> itr;
  }
  vector<int> ans;
  for(int i=0;i<N;i++){
    string s = S[i];
    if ( s == T ) {
      ans.push_back(i+1);
      continue;
    }
    if ( s.size() == T.size() ) {
      int num = 0;
      for(int idx=0;idx<(int)T.size();idx++){
        if ( s[idx] != T[idx] ) {
          num += 1;
        }
      }
      if ( num == 1 ) {
        ans.push_back(i+1);
      }
      continue;
    }
    if ( abs((int)s.size()-(int)T.size()) == 1 ) {
      vector<string> vec(2);
      size_t i0 = 0;
      size_t i1 = 0;
      if ( s.size() < T.size() ) {
        vec[0] = s;
        vec[1] = T;
      }
      else {
        vec[0] = T;
        vec[1] = s;
      }
      while( i0<vec[0].size() && i1<vec[1].size() ) {
        if ( vec[0][i0] == vec[1][i1] ) {
          i0 += 1;
          i1 += 1;
          continue;
        }
        else {
          i1 += 1;
        }
      }
      if ( i0 == vec[0].size() && (i1==vec[1].size()||i1==vec[1].size()-1)) {
        ans.push_back(i+1);
      }
      continue;
    }
  }
  cout << ans.size() << endl;
  for(auto itr:ans){
    cout << itr << ' ';
  }
  cout << endl;
  return 0;
}
