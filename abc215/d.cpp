#include <bits/stdc++.h>
using namespace std;
set<int> func(int v){
  set<int> st;
  for(int i=2;i*i<=v;i++){
    if ( v % i != 0 ) {
      continue;
    }
    while ( v % i == 0 ) {
      v /= i ;
    }
    st.insert(i);
  }
  if ( v != 1 ) {
    st.insert(v);
  }
  return st;
}
int main(void){
    int N,M;
    cin >> N >> M ;
    vector<int> A(N);
    for(int i=0;i<N;i++){
      cin >> A[i] ;
    }
    //
    // A[i] を素因数分解して各要素をstに入れる...
    set<int> st;
    for(auto it : A){
      set<int> tmp = func(it);
      st.insert(tmp.begin(), tmp.end());
    }
    //
    // stの各要素について篩にかける
    vector<bool> tbl(M+1,true);
    for(auto it : st ) {
      int p = it;
      while(p<=M){
        tbl[p] = false;
        p += it;
      }
    }
    //
    // tblが"true"の整数は、Aと互いに素な整数
    set<int> ans;
    for(int i=1;i<=M;i++){
      if ( tbl[i] == true ) {
        ans.insert(i);
      }
    }
    //
    cout << ans.size() << endl;
    for(auto it : ans ) {
      cout << it << endl;
    }
    //
    return 0;
}