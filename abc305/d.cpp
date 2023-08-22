#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<int> A(N);
  vector<int> sum(N);
  for(auto &itr : A){
    cin >> itr;
  }
  // 合計の計算
  for(int i=1;i<N;i++){
    sum[i] = sum[i-1] ;
    if ( i % 2 == 0 ) {
      sum[i] += ( A[i] - A[i-1] );
    }
  }
  // ラムダ式
  auto f = [&](int n){
    // n以下の最大の要素を探して添字にする
    int idx = lower_bound(A.begin(), A.end(), n) - A.begin() - 1;
    if ( idx < 0 ) {
      return 0;
    }
    // idxが偶数の場合、
    // 端っこの計算は不要
    if ( idx % 2 == 0 ) {
      return sum[idx];
    }
    // idxが奇数の場合、
    // 端っこの計算をする
    else {
      return sum[idx] + ( n - A[idx] );
    }
  };
  int Q;
  cin >> Q;
  for(int i=0;i<Q;i++){
    int l,r;
    cin >> l >> r ;
    int lv = f(l);
    int rv = f(r);
#ifdef DEBUG
    fprintf(stderr,"{%d,%d}\n",lv,rv);
#endif
    cout << rv - lv << '\n';
  }
  return 0;
}
