#include <bits/stdc++.h>
using namespace std;

int main(void){
  long n;
  cin >> n ;
  long cnt = 120;
  stack<char> stk ;
  while( n > 0 && cnt > 0 ) {
    // 奇数の場合は、'A'を追加して-1;
    if ( n % 2 == 1 ) {
      stk.push('A');
      n--;
      cnt--;
      continue;
    }
    // 偶数の場合は、'B'を追加して/2;
    if ( n % 2 == 0 ) {
      stk.push('B');
      n = n / 2 ;
      cnt-- ;
      continue;
    }
  }
  // スタックの先頭から末尾までを出力
  while ( ! stk.empty() ) {
    cout << stk.top() ;
    stk.pop();
  }
  return 0;
}
