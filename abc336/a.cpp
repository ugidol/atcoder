#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  string ans(N+3,'o');
  ans[0] = 'L';
  ans[N+1] = 'n';
  ans[N+2] = 'g';
  cout << ans << endl;
  return 0;
}
