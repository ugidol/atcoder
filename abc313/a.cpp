#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  int ans = 0;
  int n = 0;
  cin >> n;
  for(int i=1;i<N;i++){
    int n2;
    cin >> n2;
    ans = max(ans,n2+1-n);
  }
  cout << ans << endl;
  return 0;
}
