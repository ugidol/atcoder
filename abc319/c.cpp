#include <bits/stdc++.h>
using namespace std;
int main(void){
  vector<vector<int>> c(3,vector<int>(3));
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cin >> c[i][j];
    }
  }
  /*
   * カードを知る順番の配列.
   * next_permutation()で全探索する.
   */
  vector<vector<int>> vec = {
    {0,0},{0,1},{0,2},
    {1,0},{1,1},{1,2},
    {2,0},{2,1},{2,2},
  };
  int total = 0; // 全ての場合の数
  int num = 0; // がっかりしない場合の数
  sort(vec.begin(), vec.end());
  do {
    total += 1;
    /*
     * カードを開いた順番を配列で管理する.
     */
    vector<vector<int>> order(3,vector<int>(3));
    int o=0;
    for(auto itr:vec){
      order[itr[0]][itr[1]] = o++;
    }
    // 
    vector<vector<vector<int>>> ptn = {
      {{0,0},{0,1},{0,2}}, // 上の横一行
      {{1,0},{1,1},{1,2}}, // 真ん中の横一行
      {{2,0},{2,1},{2,2}}, // 下の横一行
      {{0,0},{1,0},{2,0}}, // 左の縦一列
      {{0,1},{1,1},{2,1}}, // 真ん中の縦一列
      {{0,2},{1,2},{2,2}}, // 右の縦一列
      {{0,0},{1,1},{2,2}}, // 左上から斜め
      {{2,0},{1,1},{0,2}}, // 右上から斜め
    };
    //
    bool disappointed = false;
    for(auto p : ptn){
      /*
       * 縦横ナナメの３マス分の順番と数字をvectorにして、
       * 順番で並べ替え
       */
      vector<pair<int,int>> v;
      for(auto pp:p){
        int i=pp[0];
        int j=pp[1];
        v.push_back({order[i][j],c[i][j]});
      }
      /*
       * 同じ値が３つ連続して書き込まれていることはないので、
       * 最初の２マスが同じだったらがっかりパターン.
       */
      sort(v.begin(), v.end());
      if ( v[0].second == v[1].second ) {
        disappointed = true;
      }
    }
    if ( ! disappointed ) {
      num += 1;
    }
  }while(next_permutation(vec.begin(), vec.end()));
  double ans = (double)num / (double)total ;
  cout << setprecision(10);
  cout << ans << endl;
  return 0;
}

