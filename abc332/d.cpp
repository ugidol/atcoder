#include <bits/stdc++.h>
using namespace std;
int main(void){
  int H,W;
  cin >> H >> W;
  vector<vector<int>> A(H,vector<int>(W));
  for(int i=0;i<H;++i){
    for(int j=0;j<W;++j){
      cin >> A[i][j];
    }
  }
  vector<vector<int>> B(H,vector<int>(W));
  for(int i=0;i<H;++i){
    for(int j=0;j<W;++j){
      cin >> B[i][j];
    }
  }
  function<int(void)> f = [&](){
    int ret = 0;
    queue<vector<vector<int>>> q ;
    q.push(A);
    map<vector<vector<int>>,int> mp;
    mp[A] = 0;
    while( ! q.empty() ) {
      vector<vector<int>> v = q.front();
      q.pop();
      /*
#ifdef DEBUG
      {
        for(int j=0;j<W;j++){
          fprintf(stderr,"----");
        }
        fprintf(stderr,"\n");
        for(int i=0;i<H;i++){
          for(int j=0;j<W;j++){
            fprintf(stderr,"[%02d],",v[i][j]);
          }
          fprintf(stderr,"\n");
        }
      }
#endif
      */
      if ( v == B ) {
        ret = mp[v];
        break;
      }
      for(int i=0;i<(H-1);i++){
        vector<vector<int>> v2(v.begin(), v.end());
        for(int j=0;j<W;j++){
          swap(v2[i][j],v2[i+1][j]);
        }
        if ( mp.find(v2) == mp.end() ) {
          q.push(v2);
          mp[v2] = mp[v] + 1;
        }
      }
      for(int j=0;j<(W-1);j++){
        vector<vector<int>> v2(v.begin(), v.end());
        for(int i=0;i<H;i++){
          swap(v2[i][j],v2[i][j+1]);
        }
        if ( mp.find(v2) == mp.end() ) {
          q.push(v2);
          mp[v2] = mp[v] + 1;
        }
      }
    }
    return ret;
  };
  vector<int> rows(H);
  for(int i=0;i<H;++i){
    rows[i] = i;
  }
  vector<int> cols(W);
  for(int i=0;i<W;++i){
    cols[i] = i;
  }
  bool matchable = false;
  do {
    do {
      bool same = true;
      for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
          if ( A[rows[i]][cols[j]] != B[i][j] ) {
            same = false;
          }
        }
      }
      if ( same ) {
        matchable = true;
      }
    }while(next_permutation(cols.begin(), cols.end()));
  }while(next_permutation(rows.begin(), rows.end()));
  /*
#ifdef DEBUG
  fprintf(stderr,"%s\n",matchable?"T":"F");
#endif
  */
  int ans = -1;
  if ( matchable ) {
    ans = f();
  }
  cout << ans << endl;
  return 0;
}
