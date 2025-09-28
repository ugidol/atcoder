#include <bits/stdc++.h>
using namespace std ;

int main(void){
  //
  int n;
  cin >> n ;
  vector<long> vec(n);
  for(int i=0;i<n;i++){
    cin >> vec[i];
    if ( vec[i] == 0 ) {
      cout << 0 << endl;
      return 0;
    }
  }
  //
  long max = 1 ;
  for(int i=0;i<18;i++){
    max *= 10;
  }
  //
  long ans = 1 ;
  for(int i=0;i<n;i++){
    if ( vec[i] == 0 ) {
      ans = 0;
      break;
    }
    long q = max / ans ;
    if ( vec[i] > q ) {
      ans = -1 ;
      break;
    }
    ans = ans * vec[i] ;
  }
  cout << ans << endl;
  return 0;
}
