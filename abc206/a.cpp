#include <bits/stdc++.h>
using namespace std;
int main(void){
  double N;
  cin >> N;
  double x = floor((double)N*1.08);
  string ans = "so-so";
  if ( x > 206 ) {
    ans = ":(";
  }
  else if ( x < 206 ) {
    ans = "Yay!";
  }
  cout << ans << endl;
  return 0;
}
