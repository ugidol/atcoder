#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<int> A(N);
  for(int i=0;i<N;i++){
    cin >> A[i];
  }
  vector<int> B(N+2);
  for(int i=0;i<N;i++){
    int idx = i+1;
    B[idx] = min({B[idx-1]+1,A[idx-1],idx});
  }
  vector<int> C(N+2);
  for(int i=0;i<N;i++){
    int idx = N-i;
    C[idx] = min({C[idx+1]+1,A[idx-1],i+1});
  }
#ifdef DEBUG
  for(int i=0;i<=N+1;i++){
    fprintf(stderr,"%d,",B[i]);
  }
  fprintf(stderr,"\n");
  for(int i=0;i<=N+1;i++){
    fprintf(stderr,"%d,",C[i]);
  }
  fprintf(stderr,"\n");
#endif
  int ans = 0;
  for(int i=1;i<=N;i++){
    ans = max(ans,min(B[i],C[i]));
  }
  cout << ans << endl;
  return 0;
}
