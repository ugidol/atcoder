#include <bits/stdc++.h>
using namespace std;
int main(void){
  long A,B;
  cin >> A >> B;
  long ans = 0;
  if ( A == B ) {
    cout << ans << endl;
    return 0;
  }
  while(A!=B){
#ifdef DEBUG
    fprintf(stderr,"[%ld][%ld]\n",A,B);
#endif
    if ( A < B ) {
      swap(A,B);
    }
    if ( B == 1 ) {
      ans += ( A - 1 );
      break;
    }
    if ( A % B == 0 ) {
      ans += ( ( A - B ) / B ) ;
      break;
    }
    ans += ( A / B );
    A = A % B ; 
  }
  cout << ans << endl;
  return 0;
}
