#include <bits/stdc++.h>
using namespace std ;

/*
 * ( a + b = x && a * b = y )
 * となるような,a,bの組み合わせがあるかどうかを判定する...
 */
bool check(int x, int y){
  for(int a=1;a<x;a++){
    for(int b=1;b<x;b++){
      if ( ( a + b ) != x ) {
        continue;
      }
      if ( ( a * b ) != y ) {
        continue;
      }
      if ( a + b > x ) {
        return false ;
      }
      return true;
    }
  }
  return false;
}

bool func(int v){
  bool ret = false;
  for(int i=2;;i++){
    int a = 3 * i ;
    if ( a >= v ) {
      break;
    }
    if ( ( ( v - a ) % 4 ) != 0 ) {
      continue;
    }
    int b = ( v - a ) / 4 ;
    if ( check(i , b ) ) {
      return true;
    }
  }
  return ret;
}


int main(void){
  int n ;
  cin >> n ;
  vector<int> vec(n);
  for(int i=0;i<n;i++){
    cin >> vec[i] ;
  }
  //
  int ans = 0;
  for(auto it : vec){
    if ( ! func(it) ) {
      ans += 1 ;
    }
  }
  cout << ans << endl ;
  return 0;
}
