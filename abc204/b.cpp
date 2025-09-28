#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n;
  cin >> n;
  vector<int> vec(n);
  for(int i=0;i<n;i++){
    cin >> vec[i];
  }
  /* */
  int ans = 0;
  for(int i=0;i<n;i++){
    if ( vec[i] > 10 ) {
      ans += vec[i] - 10;
    }
  }
  //
  cout << ans << endl;
  return 0;
}
