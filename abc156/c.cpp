#include <bits/stdc++.h>
using namespace std;
unsigned int func(unsigned int i, vector<int> &vec){
  unsigned int ret = 0;
  for(auto it : vec ) {
    ret += ( it - i ) * ( it - i ) ;
  }
  return ret ;
}
int main(void){
  int n ;
  cin >> n;
  vector<int> vec(n);
  for(int i=0;i<n;i++){
    cin >> vec[i] ;
  }
  unsigned int ans = UINT_MAX;
  for(int i=1;i<=100;i++){
    unsigned int tmp = func(i,vec);
    ans = min(ans,tmp);
  }
  cout << ans << endl;
  return 0;
}
