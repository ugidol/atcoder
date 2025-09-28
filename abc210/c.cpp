#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n , k ;
  cin >> n >> k ;
  vector<int> vec(n);
  for(int i=0;i<n;i++){
    cin >> vec[i] ;
  }
  int ans = INT_MIN;
  map<int,int> map;
  for(int i=0;i<=n-k;i++){
    if ( i == 0 ) {
      for(int j=0;j<k;j++){
        map[vec[i+j]] += 1;
      }
    }
    else{
      map[vec[i-1]] -= 1 ;
      if ( map[vec[i-1]] == 0 ) {
        map.erase(vec[i-1]);
      }
      map[vec[i+k-1]] += 1;
    }
    int tmp = map.size();
    ans = max(ans, tmp);
  }
  cout << ans << endl ;
  return 0;
}
