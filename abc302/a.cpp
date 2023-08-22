#include <bits/stdc++.h>
using namespace std;
int main(void){
  long A,B;
  cin >> A >> B ;
  long ans  =  ( A / B ) ;
  if ( ( A % B  > 0 ) ) {
    ans += 1;
  }
  cout << ans << endl;
  return 0;
}
