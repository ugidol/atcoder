#include <bits/stdc++.h>
using namespace std;
int main(void){
  int a,b,c;
  cin >> a >> b >> c;
  int ans = 0;
  ans += ( 7 - a );
  ans += ( 7 - b );
  ans += ( 7 - c );
  cout << ans << endl;
  return 0;
}
