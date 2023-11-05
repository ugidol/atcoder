#include <bits/stdc++.h>
using namespace std;
int main(void){
  vector<vector<int>> grid(9,vector<int>(9));
  for(int i=0;i<9;i++){
    for(int j=0;j<9;j++){
      cin >> grid[i][j];
    }
  }
  string ans = "Yes";
  for(int i=0;i<9;i++){
    map<int,int> mp;
    for(int j=0;j<9;j++){
      mp[grid[i][j]] += 1;
    }
    if ( mp.size() != 9 ) {
      ans = "No";
    }
  }
  for(int j=0;j<9;j++){
    map<int,int> mp;
    for(int i=0;i<9;i++){
      mp[grid[i][j]] += 1;
    }
    if ( mp.size() != 9 ) {
      ans = "No";
    }
  }
  vector<map<int,int>> vec(9,map<int,int>());
  for(int i=0;i<9;i++){
    for(int j=0;j<9;j++){
      vec[ (i/3)*3 + (j/3) ][grid[i][j]] += 1;
    }
  }
  for(auto mp:vec){
    if ( mp.size() != 9 ) {
      ans = "No";
    }
  }
  cout << ans << endl;
  return 0;
}
