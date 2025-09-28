#include <bits/stdc++.h>
using namespace std;

/*
 * a + b + c <= s && a * b * c <= t 
 * を満たす非負整数の組はいくつありますか？
 */

int main(int argc, char* argv[]){
  long s , t ;
  cin >> s >> t ;
  long cnt = 0;
  for ( int a = 0 ; a <= s ; a++ ) {
    for ( int b = 0 ; b <= s ; b++ ) {
      //
      if ( a + b > s ) {
        break;
      }
      for ( int c = 0 ; c <= s ; c++ ) {
        //
        if ( a + b + c > s ) {
          break;
        }
        if ( ( ( a + b + c ) <= s ) && ( a * b * c <= t ) ) {
          cnt++;
          continue;
        }
      }
    }
  }
  cout << cnt ;
}
/*
 * for文の使い方
 */