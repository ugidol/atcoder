#include <bits/stdc++.h>
using namespace std;
int main(void){
  int A,B;
  cin >> A >> B;
  int ans = B - A + 1;
  if ( ans < 0 ) {
    ans = 0;
  }
  cout << ans << endl;
  return 0;
}
