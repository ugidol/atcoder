#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,M;
  cin >> N >> M;
  vector<vector<int>> vec(N,vector<int>(N));
  for(int i=0;i<M;i++){
    int k;
    cin >> k;
    vector<int> x(k);
    for(int j=0;j<k;j++){
      cin >> x[j];
      x[j] -= 1;
    }
    for(int ii=0;ii<k;ii++){
      for(int jj=ii+1;jj<k;jj++){
        int a = x[ii];
        int b = x[jj];
        if ( a > b ) {
          swap(a,b);
        }
        vec[a][b] += 1;
      }
    }
  }
  string ans = "Yes";
  for(int i=0;i<N;i++){
    for(int j=i+1;j<N;j++){
      if ( vec[i][j] == 0 ) {
        ans = "No";
        break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
