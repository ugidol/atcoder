#include <bits/stdc++.h>
using namespace std;
int main(void){
  int A,B,C;
  cin >> A >> B >> C ;
  int ans = max({A+B,A+C,B+C});
  cout << ans << endl;
  return 0;
}
