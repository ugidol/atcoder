#include <bits/stdc++.h>
using namespace std;
int main(void){
  int A,B;
  cin >> A >> B;
  int ans = 0;
  for(int i=0;i<=9;i++){
    if ( i != ( A+B ) ) {
      ans = i;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
