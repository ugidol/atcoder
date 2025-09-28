#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<vector<int>> A(N,vector<int>(N));
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      cin >> A[i][j];
    }
  }
  for(int i=0;i<N;i++){
    vector<int> ans;
    for(int j=0;j<N;j++){
      if ( A[i][j] != 0 ) {
        ans.push_back(j+1);
      }
    }
    for(auto itr:ans){
      cout << itr << ' ';
    }
    cout << endl;
  }
  return 0;
}
