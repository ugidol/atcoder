#include <bits/stdc++.h>
using namespace std;
int main(void){
  long long A,M,L,R;
  cin >> A >> M >> L >> R ;
  L += (0-A);
  R += (0-A);
  if ( L < 0 ) {
    L += 1e18+1;
    R += 1e18+1;
  }
#ifdef DEBUG
  fprintf(stderr,"%lld,%lld,%lld,%lld\n",A,M,L,R);
#endif
  long long l = (L + ( M - 1 )) / M;
  long long r = (R + ( M - 1 )) / M;
  long long ans = abs(r-l);
  cout << ans << endl;
  return 0;
}
