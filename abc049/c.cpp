#include <bits/stdc++.h>
using namespace std;

string dreamer = "dreamer";
string dream   = "dream";
string eraser  = "eraser";
string erase   = "erase";

const char *str ;

string func(long idx, long max){
  int len = max - idx ;
  if ( len == 0 ) {
    return "YES" ;
  }
  string ret = "";
  if ( str[idx] == 'd' ) {
    if ( len >= 7 && memcmp(&str[idx],"dreamer",7) == 0 ) {
      ret = func(idx + 7, max);
    }
    if ( ret == "YES" ) {
      return ret ;
    }
    if ( len >= 5 && memcmp(&str[idx],"dream",5) == 0 ) {
      ret = func(idx + 5,max);
    }
    if ( ret == "YES" ) {
      return ret ;
    }
  }
  else if ( str[idx] == 'e' ) {
    if ( len >= 6 && memcmp(&str[idx],"eraser",6) == 0 ) {
      ret = func(idx + 6,max);
    }
    if ( ret == "YES" ) {
      return ret ;
    }
    if ( len >= 5 && memcmp(&str[idx],"erase",5) == 0 ) {
      ret = func(idx + 5, max);
    }
    if ( ret == "YES" ) {
      return ret;
    }
  }
  return "NO";
}


int main(void){
  string s ;
  cin >> s ;
  str = s.c_str();
  cout << func(0,s.size()) << endl ;
}
