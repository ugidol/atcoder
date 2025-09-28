#include <bits/stdc++.h>
using namespace std;
int main(void){
  string s ;
  cin >> s;
  string t ;
  cin >> t;
  //
  size_t len = s.length();
  int diff = t[0] - s[0];
  if ( s[0] > t[0] ) {
    diff = t[0] - s[0] + 26;
  }
  for(unsigned long i=0;i<len;i++){
    int v = t[i]-s[i];
    if ( s[i] > t[i] ) {
      v = t[i]-s[i]+26;
    }
#if DEBUG
    fprintf(stderr,"[%c]-[%c]:[%d]\n",t[i],s[i],v);
#endif
    if ( v != diff ) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
