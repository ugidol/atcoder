#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,L;
  cin >> N >> L;
  int ans = 0;
  for(int i=0;i<N;i++){
    int a;
    cin >> a;
    if ( a >= L ) {
      ans += 1;
    }
  }
  cout << ans << endl;
  return 0;
}
