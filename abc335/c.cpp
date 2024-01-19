#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,Q;
  cin >> N >> Q;
  vector<pair<int,int>> vec(N);
  for(int i=0;i<N;i++){
    vec[i] = make_pair(i+1,0);
  }
  vector<string> ans ;
  int head = 0;
  int tail = ( head + N - 1 ) % N;
  for(int i=0;i<Q;i++){
    int q;
    cin >> q;
    if ( q == 1 ) {
      char c;
      cin >> c;
      if ( c == 'R' ) {
        vec[tail].first  = vec[head].first + 1;
        vec[tail].second = vec[head].second;
      }
      else if ( c == 'L' ) {
        vec[tail].first  = vec[head].first - 1;
        vec[tail].second = vec[head].second;
      }
      else if ( c == 'U' ) {
        vec[tail].first  = vec[head].first ;
        vec[tail].second = vec[head].second + 1;
      }
      else if ( c == 'D' ) {
        vec[tail].first  = vec[head].first ;
        vec[tail].second = vec[head].second - 1;
      }
      head = ( head + N - 1 ) % N;
      tail = ( head + N - 1 ) % N;
    }
    else if ( q == 2 ) {
      int p;
      cin >> p;
      p -= 1;
      p = ( head + p ) % N;
      string s = to_string(vec[p].first) + ' ' + to_string(vec[p].second);
      ans.push_back(s);
    }
  }
  for(auto itr:ans){
    cout << itr << endl;
  }
  return 0;
}
