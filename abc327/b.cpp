#include <bits/stdc++.h>
using namespace std;
long pow(long base, long exp){
  long ret = 1;
  for(int i=1;i<=exp;i++){
    ret *= base;
  }
  return ret;
}
int main(void){
  long B;
  cin >> B;
  long A=0;
  do {
    A += 1;
  }
  while(pow(A,A)<B);
  long ans = -1;
  if ( pow(A,A) == B ) {
    ans = A;
  }
  cout << ans << endl;
  return 0;
}
