#include <bits/stdc++.h>
using namespace std;
int main(void){
  int A,B;
  cin >> A >> B ;
  string ans;
  if ( A > 0 && B == 0 ) {
    ans = "Gold";
  }
  else if ( A == 0 && B > 0 ) {
    ans = "Silver";
  }
  else {
    ans = "Alloy";
  }
  cout << ans << endl;
  return 0;
}
