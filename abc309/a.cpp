#include <bits/stdc++.h>
using namespace std;
int main(void){
  int A,B;
  cin >> A >> B ;
  string ans = "No";
  set<pair<int,int>> st;
  st.insert(make_pair(1,2));
  st.insert(make_pair(2,3));

  st.insert(make_pair(4,5));
  st.insert(make_pair(5,6));

  st.insert(make_pair(7,8));
  st.insert(make_pair(8,9));
  if ( st.find(make_pair(A,B)) != st.end() ) {
    ans = "Yes";
  }
  cout << ans << endl ;
  return 0;
}
