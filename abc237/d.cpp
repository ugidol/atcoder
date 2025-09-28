#include <bits/stdc++.h>
using namespace std;
int main(void){
  unsigned long N;
  string S;
  cin >> N >> S ;
  // 双方向リンクリストの宣言
  list<int> ls ;
  // 初期値として0を追加
  ls.push_front(0);
  // 0の位置をイテレータとして取得
  list<int>::iterator it = ls.begin();
  for(size_t i=0;i<N;i++){
    char c = S[i];
    if ( c == 'L' ) {
      // [i-1]番目の要素の"左側"に要素を追加
      // (イテレータの指す要素の前)
      it = ls.insert(it, i+1);
    }
    else {
      // [i-1]番目の要素の"右側"に要素を追加
      // (イテレータをインクリメントすることで実現)
      it = ls.insert(++it, i+1);
    }
  }
  for(auto it2 : ls){
    cout << it2 << ' ';
  }
  cout << endl;
  return 0;
}
