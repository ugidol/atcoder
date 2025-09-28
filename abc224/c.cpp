#include <bits/stdc++.h>
using namespace std;

bool check(pair<int,int> &p1, pair<int,int> &p2, pair<int,int> &p3){
  if ( ( ( p2.first - p1.first ) * ( p3.second - p1.second ) 
      - ( p3.first - p1.first ) * ( p2.second - p1.second ) ) == 0 )  {
    return false;
  }
  return true;
}
int main(void){
  int n ;
  cin >> n ;
  vector<pair<int,int>> vec(n);
  for(int i=0;i<n;i++){
    int x,y;
    cin >> x >> y ;
    pair p = make_pair(x,y);
    vec[i] = p;
  }
  //
  int ans = 0;
  for(size_t i=0;i<vec.size();i++){
    pair<int,int> p1 = vec[i];
    for(size_t j=i+1;j<vec.size();j++){
      pair<int,int> p2 = vec[j];
      for(size_t k=j+1;k<vec.size();k++){
        pair<int,int> p3 = vec[k];
        if ( check(p1,p2,p3) ) {
          ans++;
        }
      }
    }
  }
  cout << ans << endl ;

  return 0;
}
