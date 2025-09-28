#include <bits/stdc++.h>
using namespace std ;

int main(void){
  int h, w;
  cin >> h >> w ;
  int tbl[h][w] ;
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      cin >> tbl[i][j] ;
    }
  }
  //
  vector<pair<int,int>> veci ;
  for(int i1=1;i1<h;i1++){
    for(int i2=i1+1;i2<=h;i2++){
      pair p = make_pair(i1, i2);
      veci.push_back(p);
    }
  }
  //
  vector<pair<int,int>> vecj ;
  for(int j1=1;j1<w;j1++){
    for(int j2=j1+1;j2<=w;j2++){
      pair p = make_pair(j1, j2);
      vecj.push_back(p);
    }
  }
  //
  string ans = "Yes";
  for(size_t i=0;i<veci.size();i++){
    for(size_t j=0;j<vecj.size();j++){
      pair<int,int> pi = veci[i];
      pair<int,int> pj = vecj[j];
      //cout << "(" << pi.first << "," << pi.second << "," << pj.first << "," << pj.second << ")" ;
      int a1 = tbl[pi.first -1][pj.first -1] ;
      int a2 = tbl[pi.second-1][pj.second-1] ;
      int a3 = tbl[pi.second-1][pj.first -1];
      int a4 = tbl[pi.first -1][pj.second-1] ;
      //cout << a1 << "+" << a2 << "<=" << a3 << "+" << a4 << "=" ;
      //cout << a1 + a2 << "<=" << a3 + a4 << endl;
      if ( ! ( ( a1 + a2 ) <= ( a3 + a4 ) ) ) {
        ans = "No";
        goto end_loop;
      }
    }
  }
end_loop:
  cout << ans << endl;
  return 0;
}
