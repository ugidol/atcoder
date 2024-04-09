#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n;
  cin >> n;
  vector<pair<int,int>> vec(n);
  for(int i=0;i<n;i++){
    int x,y;
    cin >> x >> y;
    pair<int,int> p = make_pair(x,y);
    vec[i] = p;
  }
  /*
   * ２つの座標の距離を計算
   * x座標,y座標の最大公約数を計算
   * 各座標を最大公約数で割る
   */
  function<pair<int,int>(pair<int,int>,pair<int,int>)> f = [&](pair<int,int> a, pair<int,int> b){
    int c = a.first - b.first ;
    int d = a.second - b.second;
    int v = gcd(c,d);
    c /= v;
    d /= v;
    pair<int,int> p = make_pair(c,d);
    return p;
  };
  set<pair<int,int>> st;
  /*
   * 街同士の組み合わせ
   */
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      /*
       * 同じ街は考慮不要
       */
      if ( i == j ) {
        continue;
      }
      pair<int,int> a = vec[i];
      pair<int,int> b = vec[j];
      pair<int,int> d = f(a,b);
      st.insert(d);
    }
  }
  int ans = st.size();
  cout << ans << endl;
  return 0;
}
