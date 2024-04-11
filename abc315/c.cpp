#include <bits/stdc++.h>
using namespace std;
typedef struct {
  int f;
  int s;
} DATA;
int main(void){
  int N;
  cin >> N;
  vector<DATA> vec(N);
  for(int i=0;i<N;i++){
    int F,S;
    cin >> F >> S;
    DATA d = {F,S};
    vec[i] = d;
  }
  /*
   * フレーバー毎の美味しさの最大値を求める.
   */
  int ans = 0;
  vector<int> vec01(N+1);
  for(auto d:vec){
    vec01[ d.f ] = max(vec01[d.f],d.s);
  }
  sort(vec01.begin(), vec01.end());
  reverse(vec01.begin(), vec01.end());
  // フレーバーの数が2種類以上の場合のみ、満足度を計算する.
  if ( vec01.size() > 1 ) {
    ans = max(ans, vec01[0] + vec01[1] );
  }
  /*
   * 同じフレーバーの満足度の大きいほう２つを求める.
   * a[0] : 小さいほう(t)
   * a[1] : 大きいほう(s)
   */
  vector<array<int,2>> vec02(N+1,array<int,2>());
  for(auto d:vec){
    array<int,2> &ary = vec02[d.f];
    // 小さいかったら、処理しない
    if ( d.s < ary[0] ) {
      continue;
    }
    // いったん小さいほうを塗り替える.
    ary[0] = d.s;
    // 順番が逆転していたら、入れ替える.
    if ( ary[0] > ary[1] ) {
      swap(ary[0],ary[1]);
    }
  }
  /*
   * 各フレーバーにつて、
   * 同じフレーバーの満足度の大きいほう２つの合計値を求める.
   */
  for(auto a:vec02){
    // 美味しさが０の場合,アイスクリームが１個しかないので処理しない
    if ( a[0] <= 0 ) {
      continue;
    }
    // 満足度の計算
    int t = a[0];
    int s = a[1];
    ans = max(ans, s + (t/2) );
  }
  cout << ans << endl;
  return 0;
}
