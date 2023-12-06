#include <bits/stdc++.h>
using namespace std;
int main(void){
  int H,W;
  cin >> H >> W;
  vector<vector<long long>> X(H+1,vector<long long>(W+1));
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      long long x ;
      cin >> x;
      X[i+1][j+1] = x;
    }
  }
  vector<vector<long long>> Y(H+1,vector<long long>(W+1));
  for(int i=1;i<=H;i++){
    for(int j=1;j<=W;j++){
      Y[i][j] = Y[i][j-1] + X[i][j];
    }
  }
  for(int j=1;j<=W;j++){
    for(int i=1;i<=H;i++){
      Y[i][j] += Y[i-1][j];
    }
  }
  function<long long(int,int,int,int)> f = [&](int a, int b, int c, int d){
    long long v = Y[a-1][b-1] + Y[c][d] - Y[a-1][d] - Y[c][b-1];
    return v;
  };
  int Q;
  cin >> Q;
  vector<long long> ans(Q);
  for(int i=0;i<Q;i++){
    int A,B,C,D;
    cin >> A >> B >> C >> D;
    long long v = f(A,B,C,D);
    ans[i] = v;
  }
  for(auto itr:ans){
    cout << itr << endl;
  }
  return 0;
}
