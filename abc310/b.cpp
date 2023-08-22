#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,M;
  cin >> N >> M ;
  vector<int> P(N);
  vector<set<int>> F(N);
  for(int i=0;i<N;i++){
    int p,c;
    cin >> p >> c ;
    P[i] = p;
    for(int j=0;j<c;j++){
      int f;
      cin >> f;
      F[i].insert(f);
    }
  }
  //
  string ans = "No";
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      if ( i == j ) {
        continue;
      }
      if ( P[i] >= P[j] ) {
        bool has = true;
        for(auto itr : F[i]){
          if ( F[j].find(itr) == F[j].end() ) {
            has = false;
            break;
          }
        }
        if ( has ) {
          if ( P[i] > P[j] || F[i].size() < F[j].size() ) {
            ans = "Yes";
            goto eol;
          }
        }
      }
    }
  }
eol:
  cout << ans << endl;
  return 0;
}
