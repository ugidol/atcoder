#include <bits/stdc++.h>
using namespace std;
int main(void){
  long N;
  cin >> N;
  long ans = N % 998244353;
  if ( ans < 0 ) {
    ans = 998244353 + ans;
  }
  cout << ans << endl;
  return 0;
}
