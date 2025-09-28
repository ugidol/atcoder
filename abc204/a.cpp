#include <bits/stdc++.h>
using namespace std;
int main(void){
  int x,y;
  cin >> x >> y;
  int ans = 0;
  if ( x == y ) {
    ans = x;
  }
  else {
    vector<int> vec = {1,1,1};
    vec[x] -= 1;
    vec[y] -= 1;
    for(int i=0;i<3;i++){
      if ( vec[i] == 1 ) {
        ans = i;
        break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
