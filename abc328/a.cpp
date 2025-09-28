
#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,X;
  cin >> N >> X;
  int ans = 0;
  vector<int> S(N);
  for(auto &itr:S){
    cin >> itr;
    if ( itr <= X ) {
      ans += itr;
    }
  }
  cout << ans << endl;
  return 0;
}
