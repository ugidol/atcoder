#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<vector<int>> vec(100,vector<int>(100));
  for(int i=0;i<N;i++){
    int A,B,C,D;
    cin >> A >> B >> C >> D;
    for(int x=A;x<B;x++){
      for(int y=C;y<D;y++){
        vec[x][y] = 1;
      }
    }
  }
  int ans = 0;
  for(int i=0;i<100;i++){
    for(int j=0;j<100;j++){
      if ( vec[i][j] == 1 ) {
        ans += 1;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
