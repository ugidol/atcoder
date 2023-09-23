#include <bits/stdc++.h>
using namespace std;
int main(void){
  long long X,A,D,N;
  cin >> X >> A >> D >> N;
  long long mn = min(A,A + D * ( N - 1 ) );
  long long mx = max(A,A + D * ( N - 1 ) );
  long long ans = 0;
  if ( X <= mn ) {
    ans = abs(X-mn);
  }
  else if ( X >= mx ) {
    ans = abs(X-mx);
  }
  else {
    if ( D < 0 ) {
      A = mn;
      D *= -1;
    }
    long long left = 0;
    long long right = N;
    while(left<right){
      long long mid = (left + right) / 2 ;
      long long v1 = A + (D*mid);
      long long v2 = A + (D*(mid+1));
      if ( v1 <= X && X <= v2 ) {
        long long a1 = abs(X-v1);
        long long a2 = abs(X-v2);
        ans = min(a1,a2);
        break;
      }
      if ( X < v1 ) {
        right = mid;
      }
      else {
        left = mid + 1;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
