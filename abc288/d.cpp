#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,K;
  cin >> N >> K;
  vector<int> A(N);
  for(auto &itr:A){
    cin >> itr;
  }
  vector<vector<long long>> M(K,vector<long long>( ( N + ( K - 1 ) ) / K )); 
  for(int i=0;i<N;i++){
    if ( i / K == 0 ) {
      M[i%K][i/K] = A[i];
    }
    else {
      M[i%K][i/K] = M[i%K][i/K-1] + A[i];
    }
  }
#ifdef DEBUG
  for(int i=0;i<K;i++){
    for(int j=0;j<(N+(K-1))/K;j++){
      fprintf(stderr,"%3lld,",M[i][j]);
    }
    fprintf(stderr,"\n");
  }
#endif

  int Q;
  cin >> Q;
  vector<string> ans;
  for(int i=0;i<Q;i++){
    int l,r;
    cin >> l >> r;
    l -= 1;
    r -= 1;
    bool b;
    if ( b ) {
      ans.push_back("Yes");
    }
    else {
      ans.push_back("No");
    }
  }
  for(auto itr:ans){
    cout << itr << endl;
  }
  return 0;
}
