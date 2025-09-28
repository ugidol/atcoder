#include <bits/stdc++.h>
using namespace std;

int main(void){
  string a, b;
  cin >> a >> b ;
  //
  string ans = "Easy";
  unsigned long int len = min(a.size(),b.size());
  for(unsigned long int i=0;i<len;i++){
    char ca = a[a.size()-i-1] ;
    char cb = b[b.size()-i-1] ;
    if ( (ca - '0') + (cb - '0') > 9 ) {
      ans = "Hard";
      break;
    }
  }
  //
  cout << ans << endl;
  return 0;
}
