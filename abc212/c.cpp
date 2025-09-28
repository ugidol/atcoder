#include <bits/stdc++.h>
using namespace std;

bool func1(const int left, const int right){
  return left < right ;
}

int main(void){
  int n,m;
  cin >> n >> m ;
  vector<int> veca(n);
  vector<int> vecb(m);
  for(int i=0;i<n;i++){
    cin >> veca[i];
  }
  for(int i=0;i<m;i++){
    cin >> vecb[i];
  }
  //-
  sort(veca.begin(), veca.end());
  sort(vecb.begin(), vecb.end());
  //-
  int ans = INT_MAX ;
  for(size_t i=0;i<veca.size();i++){
    int a = veca[i];
    // vecb を二分探索
    decltype(vecb)::iterator it = lower_bound(vecb.begin(), vecb.end(),a, func1);
    int left = INT_MAX ;
    int right = INT_MAX;
    if ( it == vecb.begin() ) {
      right = abs( a - *it );
    }
    else if ( it == vecb.end() ) {
      it = prev(it);
      left = abs( a - *it );
    }
    else {
      right = abs( a - *it );
      it = prev(it);
      left = abs( a - *it );
    }
    int tmp = min(left, right);
    ans = min(ans,tmp);
  }
  cout << ans << endl ;
  return 0;
}
