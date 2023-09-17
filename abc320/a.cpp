#include <bits/stdc++.h>
using namespace std;
int main(void){
  int A,B;
  cin >> A >> B ;
  long ans = 0;
  ans = pow(A,B) + pow(B,A);
  cout << ans << endl;
  return 0;
}
