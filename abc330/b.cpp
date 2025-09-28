#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,L,R;
  cin >> N >> L >> R;
  for(int i=0;i<N;i++){
    int A;
    cin >> A;
    int ans = A;
    if ( A <= L ) {
      ans = L;
    }
    else if ( A >= R ) {
      ans = R;
    }
    cout << ans << ' ';
  }
  cout << endl;
  return 0;
}
