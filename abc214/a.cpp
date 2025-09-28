/*
 * 問題文
 * AtCoder Beginner Contestは、今回で214回目の開催となりました
 * 今までのAtCoder Beginner Contestにおいて、出題される問題数は次のように変化しました。
 * 1回目から125回目までは4問
 * 126回目から216回目までは6問
 * 212回目から214回目までは8問
 * N回目のAtCoderBeginnerContestにおいて出題された問題数を求めてください
 */
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]){
  int n = 0;
  cin >> n ;
  if ( n <= 125 ) {
    cout << 4 << endl ;
  }
  else if ( n >= 126 && n <= 211 ) {
    cout << 6 << endl ;
  }
  else if ( n >= 212 && n <= 214 ) {
    cout << 8 << endl;
  }
  return 0;
}
/*
 * 【ポイント】
 * IF文を使った条件分岐
 * else　if を使った分岐の継続
 * && を使用した条件の組み合わせ
 */