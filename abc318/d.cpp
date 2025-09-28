#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  int N;
  cin >> N;
  vector<vector<int>> grid(N,vector<int>(N));
  for(int i=1;i<=N-1;i++){
    for(int j=i+1;j<=N;j++){
      int d;
      cin >> d;
      grid[i-1][j-1] = d;
      grid[j-1][i-1] = d;
    }
  }
  if ( N % 2 == 1 ) {
    N += 1;
  }
  //
  ll ans = 0;
  vector<int> used(N);
  auto f = [&](auto f, ll w) -> void{
    ans = max(ans,w);
    int i = 0;
    while(i<N && used[i]==true){
      i++;
    }
    if ( i == N ) {
      return ;
    }
    used[i] = true;
    for(int j=i+1;j<N;j++){
      if ( used[j] == true ) {
        continue;
      }
      used[j] = true;
      f(f,w + grid[i][j]);
      used[j] = false;
    }
    used[i] = false;
  };
  f(f,0);
  cout << ans << endl;
  return 0;
}
