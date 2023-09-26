#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n ;
  cin >> n ;
  vector<long> vec(n);
  for(int i=0;i<n;i++){
    cin >> vec[i] ;
  }
  sort(vec.begin(), vec.end());
  long ans = 1;
  for(int i=0;i<n;i++){
    ans = ( ans * ( vec[i] - i ) % 1000000007 )  ;
  }
  cout << ans << endl ;
  return 0;
}
