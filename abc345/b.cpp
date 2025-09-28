#include <bits/stdc++.h>
using namespace std;
int main(void){
  long X;
  cin >> X;
  long r  = ( 10 - ( X % 10 ) ) % 10;
  long ans = ( X + r ) / 10;
  cout << ans << endl;
  return 0;
}
