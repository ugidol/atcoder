#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  string s(N+1,'-');
  for(int i=0;i<=N;i++){
    for(int j=1;j<=9;j++){
      int q = N / j;
      int r = N % j;
      if ( r != 0 ) {
        continue;
      }
      if ( i % q != 0 ) {
        continue;
      }
      s[i] = '0' + j;
      break;
    }
  }
  cout << s << endl;
  return 0;
}
