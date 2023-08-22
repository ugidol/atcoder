#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<string> tbl(N);
  for(int i=0;i<N;i++){
    string s;
    cin >> s;
    tbl[i] = s;
  }
  vector<vector<char>> ans(N,vector<char>(N));
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      ans[i][j] = tbl[i][j];
    }
  }
  //
  for(int j=0;j<N-1;j++){
    ans[0][j+1] = tbl[0][j];
  }
  for(int i=0;i<N-1;i++){
    ans[i+1][N-1] = tbl[i][N-1];
  }
  for(int j=1;j<N;j++){
    ans[N-1][j-1] = tbl[N-1][j];
  }
  for(int i=1;i<N;i++){
    ans[i-1][0] = tbl[i][0];
  }
  //
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      cout << ans[i][j] ;
    }
    cout << endl;
  }
  return 0;
}
