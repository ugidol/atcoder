#include <bits/stdc++.h>
using namespace std;
/*
 * 末尾の数字を先頭に移動する.
 */
int cnv(int v){
  // 文字列に変換
  string s = to_string(v);
  // 末尾の数字を取得
  char c = s[s.size()-1];
  // 末尾の数字を削除
  s.erase(s.begin() + (s.size() - 1));
  // 先頭に、末尾の数字を追加
  s.insert(0,1,c);
  // intに変換
  int v2 = stoi(s);
  return v2;
}
/*
 * 2 <= N < 1000000 
 * なので
 */
const int MAX = 1000000 ;
int main(void){
  int a,N;
  cin >> a >> N ;
  map<int,int> mp;
#ifdef DEBUG
  fprintf(stderr,"a=%d,N=%d\n",a,N);
#endif
  queue<int> que;
  que.push(1);
  mp[1] = 1;
  // BFS
  while( ! que.empty() ){
    // pop
    int &v = que.front();
    que.pop();
#ifdef DEBUG
    fprintf(stderr,"v=%d\n",v);
#endif
    // 先頭に追加(1)
    int op1 = v * a ;
    if ( mp[op1] == 0 && op1 < MAX ) {
      que.push( op1 ) ;
      mp[op1] = mp[v] + 1;
    }
    // 先頭に追加(2)
    if ( v >= 10 && v % 10 ) {
      // 末尾の数字を先頭に移動
      int op2 = cnv(v);
      if ( mp[op2] == 0 && op2 < MAX ) {
        que.push(op2);
        mp[op2] = mp[v] + 1;
      }
    }
  }
  cout << mp[N] - 1 << endl;
  return 0;
}
