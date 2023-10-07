#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<string> S(N);
  for(auto &itr:S){
    cin >> itr;
  }
  //
  vector<pair<int,int>> vec(N);
  for(int i=0;i<N;i++){
    vec[i].second = i;
  }
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      if ( i == j ) {
        continue;
      }
      if ( S[i][j] == 'o' ) {
        vec[i].first += 1;
      }
    }
  }
  sort(vec.begin(), vec.end(), 
      [](pair<int,int> &a, pair<int,int> &b){
        if ( a.first == b.first ) {
          return a.second < b.second;
        }
        else {
          return a.first > b.first ;
        }
  });
  for(auto v:vec){
    cout << ( v.second + 1 ) << ' ' ;
  }
  cout << endl;
  return 0;
}
