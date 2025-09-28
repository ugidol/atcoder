#include <bits/stdc++.h>
using namespace std;
int main(void){
  int x,y;
  cin >> x >> y ;
  int ans = 0;
  while(x<y){
    x += 10;
    ans += 1;
  }
  cout << ans << endl;
  return 0;
}
