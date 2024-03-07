#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<int> S(N);
  for(int i=0;i<N;i++){
    cin >> S[i];
  }
  vector<int> T(N);
  for(int i=0;i<N;i++){
    cin >> T[i];
  }
  auto itr = min_element(T.begin(), T.end());
  size_t idx = distance(T.begin(), itr);
  vector<int> ans(N);
  ans[idx] = T[idx];
  for(int i=0;i<N-1;i++){
    size_t prev = idx;
    idx = ( idx + 1 ) % N ;
    ans[idx] = min(T[idx], ans[prev] + S[prev] );
  }
  for(int i=0;i<N;i++){
    cout << ans[i] << endl;
  }
  return 0;
}
