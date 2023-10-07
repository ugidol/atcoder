#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,M;
  cin >> N >> M;
  vector<int> A(M);
  for(auto &itr:A){
    cin >> itr;
  }
  vector<int> score(N);
  vector<vector<int>> problem(N);
  int high_score = 0;
  vector<string> S(N);
  for(int i=0;i<N;i++){
    string s;
    cin >> s;
    S[i] = s;
    int v = ( i + 1 ) ;
    vector<int> v2;
    for(int j=0;j<M;j++){
      char c = s[j];
      if ( c == 'o' ) {
        v += A[j];
      }
      else {
        v2.push_back(A[j]);
      }
    }
    score[i] = v;
    high_score = max(high_score,v);
    sort(v2.begin(), v2.end());
    problem[i] = v2;
  }
  //
  for(int i=0;i<N;i++){
    int s = score[i];
    int d = high_score - s;
    vector<int> v2 = problem[i];
    int ans = 0;
    for(int j=0;j<(int)v2.size()&&d>0;j++){
      int v = v2[v2.size() - 1 - j];
      d -= v;
      ans += 1;
    }
    cout << ans << endl;
  }

  return 0;
}
