#include <bits/stdc++.h>
using namespace std;
int main(void){
  int a,b;
  cin >> a >> b;
  int ans = 0;
  int n=1;
  while(n<b){
    n = ( n - 1 ) + a ;
    ans++;
  }
  cout << ans << endl;
  return 0;
}
