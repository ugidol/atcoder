#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,M;
  cin >> N >> M ;
  string S;
  cin >> S;
  vector<int> C(N);
  for(auto &itr : C ) {
    cin >> itr;
  }
  map<int,vector<int>> mp;
  for(int i=0;i<N;i++){
    int c = C[i];
    mp[c].push_back(i);
  }
  string ans(N,' ');
  for(int i=0;i<M;i++){
    vector<int> pos = mp[i+1];
    for(int j=0;j<(int)pos.size();j++){
      int src = pos[j];
      int dest = pos[(j+1)%pos.size()];
      ans[dest] = S[src];
    }
  }
  cout << ans << endl;
  return 0;
}
