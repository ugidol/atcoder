#include <bits/stdc++.h>
using namespace std;

#ifdef DEBUG
void debug(vector<int> &vec){
  for(int i=0;i<(int)vec.size();i++){
    fprintf(stderr,"%d,",vec[i]);
  }
  fprintf(stderr,"\n");
}
void debug(vector<char> &vec){
  for(int i=0;i<(int)vec.size();i++){
    fprintf(stderr,"%c,",vec[i]);
  }
  fprintf(stderr,"\n");
}
void debug(string &s){
  for(int i=0;i<(int)s.size();i++){
    fprintf(stderr,"%c",s[i]);
  }
  fprintf(stderr,"\n");
}
#endif

typedef struct {
  int T;
  int A;
  int B;
} query;


/*
 * 
 */
int main(void){
  // INPUT
  int N;
  cin >> N;
  int len = 2 * N;
  vector<char> S(len);
  for(int i=0;i<len;i++){
    cin >> S[i];
  }
  int Q;
  cin >> Q;
  vector<query> qs(Q);
  for(int i=0;i<Q;i++){
    int T,A,B;
    cin >> T >> A >> B;
    A -= 1;
    B -= 1;
    qs[i] = {T,A,B};
  }
  
  // SOLVE
  bool flip = false;
  string ans(len,' ');
  function<void(void)> f = [&](void){
    /*
     * FLIP状態の場合、
     * 後半部分を前半部分にして、
     * 前半部分を後半部分にする。
     */
    if ( flip ) {
      for(int i=0;i<N;i++){
        ans[i] = S[N+i];
      }
      for(int i=0;i<N;i++){
        ans[N+i] = S[i];
      }
    }
    /*
     * FLIP状態ではない場合は、
     * そのまま文字列を生成する。
     */
    else {
      for(int i=0;i<len;i++){
        ans[i] = S[i];
      }
    }
#ifdef DEBUG
    cout << ans << endl;
#endif
  };
  for(auto q:qs){
    if ( q.T == 1 ) {
      /*
       * FLIP状態の場合、
       * 入れ替える文字の位置をずらす必要がある
       */
      if ( flip ) {
        int a = ( q.A + N ) % (len);
        int b = ( q.B + N ) % (len);
        swap(S[a],S[b]);
      }
      /*
       * FLIP状態ではない場合、
       * そのまま入替を行う.
       */
      else {
        int a = q.A;
        int b = q.B;
        swap(S[a],S[b]);
      }
    }
    else {
      // boolの反転
      flip = ! flip;
    }
#ifdef DEBUG
    f();
#endif
  }
  /*
   * 文字列の生成
   */
  f();
  cout << ans << endl;
  return 0;
}
