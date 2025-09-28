#include <bits/stdc++.h>
using namespace std;
int main(void){
  string S;
  cin >> S;
  int ans = 0;
  for(int v=0;v<=9999;v++){
    char buff[5];
    sprintf(buff,"%04d",v);
    string s(buff,4);
    bool chk = true;
    for(int i=0;i<10;i++){
      char c = S[i];
      if ( c == 'o' ) {
        if ( s.find('0'+i) == string::npos ) {
          chk = false;
        }
      }
      else if ( c == 'x' ) {
        if ( s.find('0'+i) != string::npos ) {
          chk = false;
        }
      }
    }
    if ( chk == true ) {
      ans += 1;
    }
  }
  cout << ans << endl;
  return 0;
}
