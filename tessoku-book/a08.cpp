#include <bits/stdc++.h>
using namespace std;
int main(void){
  int H,W;
  cin >> H >> W;
  vector<vector<long long>> X(H+1,vector<long long>(W+1));
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      cin >> X[i+1][j+1];
    }
  }
  vector<vector<long long>> Z(H+1,vector<long long>(W+1));
  // ヨコ方向の累積和
  for(int i=1;i<=H;i++){
    for(int j=1;j<=W;j++){
      Z[i][j] = Z[i][j-1] + X[i][j];
    }
  }
  // タテ方向の累積和
  for(int i=1;i<=H;i++){
    for(int j=1;j<=W;j++){
      Z[i][j] += Z[i-1][j];
    }
  }
  int Q;
  cin >> Q;
  vector<long long> ans(Q);
  for(int i=0;i<Q;i++){
    int A,B,C,D;
    cin >> A >> B >> C >> D;
    // 左上＋右下ー右上ー左下
    long long v = Z[A-1][B-1] + Z[C][D] - Z[A-1][D] - Z[C][B-1];
    ans[i] = v;
  }
  for(const auto itr:ans){
    cout << itr << endl;
  }
  return 0;
}
