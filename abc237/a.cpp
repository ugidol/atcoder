#include <bits/stdc++.h>
using namespace std;
long long int pw(long long int a, long long int b ) {
  long long int ret = 1;
  while(b>0){
    ret *= a ;
    b -= 1;
  }
  return ret;
}
int main(void){
  long long int N;
  cin >> N ;
  string ans = "No";
  if ( N >= pw(-2,31) && N < pw(2,31) ) { 
    ans = "Yes";
  }
  cout << ans << endl;
  return 0;
}
