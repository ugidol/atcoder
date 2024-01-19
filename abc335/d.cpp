#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<vector<int>> g(N+2,vector<int>(N+2,-1));
  for(int i=1;i<=N;i++){
    for(int j=1;j<=N;j++){
      g[i][j] = 0;
    }
  }
  g[(N+1)/2][(N+1)/2] = -1;
  vector<vector<int>> D = { {  0,+1},
                            { +1, 0},
                            {  0,-1},
                            { -1, 0},
  };
  int v = 1;
  int d = 0;
  stack<vector<int>> stk;
  stk.push({1,1});
  while( ! stk.empty() ) {
    vector<int> p = stk.top();
    stk.pop();
#ifdef DEBUG
    fprintf(stderr,"{%d,%d}\n",p[0],p[1]);
#endif
    //
    g[p[0]][p[1]] = v++;
    //
    vector<int> next = { p[0] + D[d%4][0], p[1] + D[d%4][1] };
    if ( g[next[0]][next[1]] == 0 ) {
      stk.push(next);
    }
    else {
      d += 1;
      d %= 4;
      next = { p[0] + D[d%4][0], p[1] + D[d%4][1] };
      if ( g[next[0]][next[1]] == 0 ) {
        stk.push(next);
      }
    }
  }
  for(int i=1;i<=N;i++){
    for(int j=1;j<=N;j++){
      int v = g[i][j];
      string ans = to_string(v);
      if ( i == (N+1)/2 && j == (N+1)/2 ) {
        ans = "T";
      }
      cout << ans << ' ' ;
    }
    cout << endl;
  }
  return 0;
}
