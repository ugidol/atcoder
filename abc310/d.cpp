#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,T,M;
  cin >> N >> T >> M ;
  vector<set<int>> matrix(N+1);
  for(int i=0;i<M;i++){
    int a,b;
    cin >> a >> b;
    matrix[a].insert(b);
    matrix[b].insert(a);
  }
  int ans = 0;
  vector<set<int>> teams;
  function<void(int)> f = [&](int i){
    if ( i > N ) {
      if ( (int)teams.size() == T ) {
        ans += 1;
      }
      return ;
    }
    set<int> bs = matrix[i];
    for(int j=0;j<(int)teams.size();j++){
      bool flg = true;
      for(auto b:bs){
        if ( teams[j].find(b) != teams[j].end() ) {
          flg = false;
          break;
        }
      }
      if ( ! flg ) {
        continue;
      }
      teams[j].insert(i);
      f(i+1);
      teams[j].erase(i);
    }
    {
      set<int> s;
      s.insert(i);
      teams.push_back(s);
      f(i+1);
      teams.pop_back();
    }
    return;
  };
  f(1);
  cout << ans << endl;
  return 0;
}
