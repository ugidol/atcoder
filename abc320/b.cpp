#include <bits/stdc++.h>
using namespace std;
bool check(string str){
  bool ret = true;
  for(int i=0;i<(int)str.size()/2;i++){
    char l = str[i];
    char r = str[str.size()-1-i];
    if ( l != r ) {
      ret = false;
      break;
    }
  }
  return ret;
}
bool func(string str, int len){
  for(int i=0;i<(int)str.size();i++){
    if ( i + len > (int)str.size() ) {
      break;
    }
    string substr = str.substr(i,len);
    if ( check(substr) ) {
      return true;
    }
  }
  return false;
}
int main(void){
  string S;
  cin >> S;
  int ans = 0;
  for(int len=1;len<=(int)S.size();len++){
    bool chk = func(S,len);
    if ( chk ) {
      ans = len;
    }
  }
  cout << ans << endl;
  return 0;
}
