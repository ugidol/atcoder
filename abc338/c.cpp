#include <bits/stdc++.h>
using namespace std;
int N;
int f(vector<int> Q, vector<int> B){
  int n = 1e6+1;
  for(int i=0;i<N;i++){
    if ( B[i] > 0 ) {
      n = min(n,Q[i]/B[i]);
    }
  }
  return n;
}
int main(void){
  cin >> N;
  vector<int> Q(N);
  for(int i=0;i<N;i++){
    cin >> Q[i];
  }
  int n = 1e6+1;
  vector<int> A(N);
  for(int i=0;i<N;i++){
    cin >> A[i];
    if ( A[i] > 0 ) {
      n = min(n,Q[i] / A[i]);
    }
  }
  int m = 1e6+1;
  vector<int> B(N);
  for(int i=0;i<N;i++){
    cin >> B[i];
    if ( B[i] > 0 ) {
      m = min(m,Q[i] / B[i]);
    }
  }
  //
  int ans = 0;
  for(int i=0;i<=n;i++){
    vector<int> q = Q;
    for(int j=0;j<N;j++){
      q[j] -= ( A[j] * i );
    }
    ans = max(ans,f(q,B)+i);
  }
  for(int i=0;i<=m;i++){
    vector<int> q = Q;
    for(int j=0;j<N;j++){
      q[j] -= ( B[j] * i );
    }
    ans = max(ans,f(q,A)+i);
  }
  cout << ans << endl;
  return 0;
}
