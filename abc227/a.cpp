#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n,k,a;
  cin >> n >> k >> a ;
  a -= 1 ;
  int ans ;
  for(int i=0;i<k;i++){
    ans = ( a + i ) % n ;
  }
  cout << ans + 1 << endl ;
  return 0;
}
