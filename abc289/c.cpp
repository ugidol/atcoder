#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,M;
  cin >> N >> M;
  vector<vector<int>> vec(M,vector<int>());
  for(int i=0;i<M;i++){
    int c;
    cin >> c;
    vector<int> a(c);
    for(int j=0;j<c;j++){
      cin >> a[j];
    }
    vec[i] = a;
  }
  // 
  int ans = 0;
  int n = M;
  // 0 から 2^n まで
  for(int bit=0;bit<(1<<n);bit++){
    set<int> st;
    for(int i=0;i<n;i++){
      // i 番目のbitが立っているかどうかを判定
      int b = bit & (1<<i) ;
      if ( b ) {
        vector<int> &v = vec[i];
        copy(v.begin(), v.end(), inserter(st, st.begin()));
      }
    }
    if ( (int)st.size() == N ) {
      ans += 1;
    }
  }
  //
  cout << ans << endl;
  return 0;
}
