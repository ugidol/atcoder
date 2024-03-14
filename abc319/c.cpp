#include <bits/stdc++.h>
using namespace std;
int main(void){
  vector<vector<int>> c(3,vector<int>(3));
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cin >> c[i][j];
    }
  }
  vector<vector<int>> vec = {
    {0,0},{0,1},{0,2},
    {1,0},{1,1},{1,2},
    {2,0},{2,1},{2,2},
  };
  int total = 0;
  int num = 0;
  sort(vec.begin(), vec.end());
  do {
    total += 1;
    vector<vector<int>> order(3,vector<int>(3));
    int o=0;
    for(auto itr:vec){
      order[itr[0]][itr[1]] = o++;
    }
    vector<vector<vector<int>>> ptn = {
      {{0,0},{0,1},{0,2}},
      {{1,0},{1,1},{1,2}},
      {{2,0},{2,1},{2,2}},
      {{0,0},{1,0},{2,0}},
      {{0,1},{1,1},{2,1}},
      {{0,2},{1,2},{2,2}},
      {{0,0},{1,1},{2,2}},
      {{2,0},{1,1},{0,2}},
    };
    //
    bool disappointed = false;
    for(auto p : ptn){
      vector<pair<int,int>> v;
      for(auto pp:p){
        int i=pp[0];
        int j=pp[1];
        v.push_back({order[i][j],c[i][j]});
      }
      sort(v.begin(), v.end());
      if ( v[0].second == v[1].second ) {
        disappointed = true;
      }
    }
    if ( ! disappointed ) {
      num += 1;
    }
  }while(next_permutation(vec.begin(), vec.end()));
  double ans = (double)num / (double)total ;
  cout << setprecision(10);
  cout << ans << endl;
  return 0;
}

