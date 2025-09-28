#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n,m;
  cin >> n >> m ;
  vector<pair<int,int>> vec(m);
  for(int i=0;i<m;i++){
    int a,b;
    cin >> a >> b ;
    pair<int,int> p = make_pair(a,b);
    vec[i] = p;
  }
  //
  set<pair<int,int>> st;
  for(int i=0;i<m;i++){
    int a,b;
    cin >> a >> b;
    pair<int,int> p = make_pair(a,b);
    st.insert(p);
  }
  //
  vector<int> ary(n);
  for(int i=0;i<n;i++){
    ary[i] = i+1;
  }
  //
  do {
    set<pair<int,int>> tmp ;
    for(int i=0;i<m;i++){
      int a = ary[vec[i].first - 1];
      int b = ary[vec[i].second - 1];
      pair<int,int> p;
      if ( a < b ) {
        p = make_pair(a,b);
      }
      else {
        p = make_pair(b,a);
      }
      tmp.insert(p);
    }
    if ( tmp == st ) {
      cout << "Yes" << endl;
      return 0;
    }

  }while(next_permutation(ary.begin(), ary.end()));

  cout << "No" << endl;
  return 0;
}
