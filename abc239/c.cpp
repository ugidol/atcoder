#include <bits/stdc++.h>
using namespace std;
int main(void){
  int x1,y1,x2,y2;
  cin >> x1 >> y1 >> x2 >> y2 ;
  //
  int tbl[8][2] = { {-2,+1},{-1,+2},{+1,+2},{+2,+1},{+2,-1},{+1,-2},{-1,-2},{-2,-1}};
  set<pair<int,int>> st;
  for(int i=0;i<8;i++){
    pair<int,int> p ;
    p.first = x1 + tbl[i][0];
    p.second = y1 + tbl[i][1];
    st.insert(p);
  }
  //
  string ans = "No";
  for(int i=0;i<8;i++){
    pair<int,int> p ;
    p.first = x2 + tbl[i][0];
    p.second = y2 + tbl[i][1];
    if ( st.find(p) != st.end() ) {
      ans = "Yes";
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
