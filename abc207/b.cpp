#include <bits/stdc++.h>
using namespace std;
int main(void){
  int a,b,c,d;
  cin >> a >> b >> c >> d ;
  if ( b >= c * d ) {
    cout << -1 << endl;
    return 0;
  }
  unsigned long long int blue = a;
  unsigned long long int red  = 0;
  for(unsigned int i=0;i<=UINT_MAX;i++){
    if ( blue <= red * d ) {
      cout << i << endl;
      return 0;
    }
    blue += b;
    red  += c;
  }
  return 0;
}
