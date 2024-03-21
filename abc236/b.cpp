#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N ;
  cin >> N ;
  vector<int> vec(N+1);
  for(int i=0;i<(4*N)-1;i++){
    int a;
    cin >> a;
    vec[a] += 1;
  }
  int ans = 0;
  for(int i=1;i<=N;i++){
    if ( vec[i] == 3 ) {
      ans = i;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
