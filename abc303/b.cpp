#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,M;
  cin >> N >> M;
  /*
  vector<vector<int>> tbl(N,vector<int>(N,1));
  for(int i=0;i<N;i++){
    tbl[i][i] = 0;
  }
  */
  set<pair<int,int>> st;
  //
  for(int i=0;i<M;i++){
    vector<int> vec(N);
    for(int j=0;j<N;j++){
      int a;
      cin >> a;
      vec[j] = a;
    }
    for(int j=0;j<(N-1);j++){
      int a = vec[j];
      int b = vec[j+1];
      if ( a > b ) {
        swap(a,b);
      }
      pair<int,int> p = make_pair(a,b);
      st.insert(p);
      /*
      tbl[ vec[j]   -1 ][ vec[j+1] -1 ] = 0;
      tbl[ vec[j+1] -1 ][ vec[j]   -1 ] = 0;
      */
    }
  }
  long ans = 0;
  /*
  for(int i=0;i<M;i++){
    for(int j=0;j<N;j++){
      ans += tbl[i][j];
    }
  }
  */
  ans = ( ( ( N * N ) - N ) / 2 )- st.size();
  cout << ans << endl;
  //
  return 0;
}
