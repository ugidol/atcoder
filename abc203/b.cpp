#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n ;
  cin >> n ;
  int k ;
  cin >> k ;
  int ans = 0;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=k;j++){
      ans += i * 100 + j ;
    }
  }
  //
  cout << ans << endl;
  return 0;
}
