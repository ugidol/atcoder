#include <bits/stdc++.h>
using namespace std;
long _pow(long x, long n, long P){
  long ret = 1 ;
  while(n){
    if ( n & 1 ) {
      ret = ( ret % P ) * ( x % P ) ;
    }
    x = ( x % P ) * ( x % P ) ;
    n >>= 1 ;
  }
  return ret;
}
int main(void){
  long P = 998244353;
  deque<int> deq;
  deq.push_front(1);
  long ans = 1;
  int Q;
  cin >> Q;
  for(int i=0;i<Q;i++){
    int q;
    cin >> q;
    if ( q == 1 ) {
      int x;
      cin >> x;
      deq.push_back(x);
      ans = (ans % P) * ( 10 % P );
      ans = (ans % P) + ( x % P ) ;
    }
    else if ( q == 2 ) {
      int v = deq.front();
      deq.pop_front();
      long sub = ( v * _pow((long)10,(long)deq.size(),P) );
      ans = ( ans % P ) - (sub % P );
      if ( ans < 0 ) {
        ans += P;
      }
    }
    else {
      cout << ( ans ) << endl;
    }
  }
  return 0;
}
