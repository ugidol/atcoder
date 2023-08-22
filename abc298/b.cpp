#include <bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>> &vec,int N){
  vector<vector<int>> tmp;
  tmp.resize(N,vector<int>(N));
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      tmp[i][j] = vec[N-1-j][i];
    }
  }
  copy(tmp.begin(),tmp.end(), vec.begin());
}
bool eq(vector<vector<int>> &a, vector<vector<int>> &b,int N){
  bool ret = false;
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      if ( a[i][j] == 1 ) {
        if ( b[i][j] != 1 ) {
          goto eol;
        }
      }
    }
  }
  ret = true;
eol:
  return ret;
}
int main(void){
  int N;
  cin >> N;
  vector<vector<int>> A(N,vector<int>(N));
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      int a;
      cin >> a;
      A[i][j] = a;
    }
  }
  vector<vector<int>> B(N,vector<int>(N));
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      int b;
      cin >> b;
      B[i][j] = b;
    }
  }
  //
  string ans = "No";
  if ( eq(A,B,N) ) {
    ans = "Yes";
  }
  else {
    for(int i=0;i<3;i++){
      rotate(A,N);
#ifdef DEBUG
      for(int x=0;x<N;x++){
        for(int y=0;y<N;y++){
          int c = A[x][y];
          fprintf(stderr,"%d ",c);
        }
        fprintf(stderr,"\n");
      }
#endif
      if ( eq(A,B,N) ) {
        ans = "Yes";
        break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
