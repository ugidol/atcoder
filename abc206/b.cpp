#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n;
  cin >> n ;
  int v = 0;
  int ans = 0;
  while(v<n){
    v += ++ans;
  }
  cout << ans << endl;
  return 0;
}
