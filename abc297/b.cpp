#include <bits/stdc++.h>
using namespace std;
int main(void){
  string S;
  cin >> S;
  size_t x = S.find("B");
  size_t y = S.find("B",x+1);
  size_t xx = S.find("R");
  size_t yy = S.find("R",xx+1);
  size_t k = S.find("K");
  string ans="No";
  if ( (x + y)%2==1 && xx < k && k < yy ) {
    ans = "Yes";
  }
  cout << ans << endl;
  return 0;
}
