#include <bits/stdc++.h>
using namespace std;
int main(void){
  /*
   * atcoderを数値比較するための準備
   */
  string atcoder="atcoder";
  map<char,int> mp;
  for(int i=0;i<(int)atcoder.size();i++){
    char c = atcoder[i];
    mp[c] = i;
  }
  /*
   * INPUT
   */
  string S;
  cin >> S;
  /*
   * バブルソート
   * 右から大きい順に並べていく
   */
  bool swapped = true;
  int ans = 0;
  for(int right=(int)S.size();right>=0&&swapped;right--){
    /*
     * 左から順番に見ていく
     */
    for(int left=0;left<right-1;left++){
      /*
       * 左側の方が大きかったら、swap
       */
      if ( mp[S[left]] > mp[S[left+1]] ) {
        swap(S[left],S[left+1]);
        swapped = true;
        ans += 1;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
