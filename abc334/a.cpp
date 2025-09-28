#include <bits/stdc++.h>
using namespace std;
int main(void){
  int B,G;
  cin >> B >> G;
  string ans = "Bat";
  if ( B < G ) {
    ans = "Glove";
  }
  cout << ans << endl;
  return 0;
}
