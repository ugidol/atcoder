#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  string S;
  cin >> S;
  vector<long> C(N);
  for(int i=0;i<N;i++){
    cin >> C[i];
  }
  vector<long> A(N+1);
  for(int i=0;i<N;i++){
    char c = S[i];
    if ( (i)%2 == int(c-'0') ) {
      A[i+1] = A[i] + C[i];
    }
    else {
      A[i+1] = A[i];
    }
  }
  vector<long> B(N+1);
  for(int i=0;i<N;i++){
    char c = S[i];
    if ( (i+1)%2 == int(c-'0') ) {
      B[i+1] = B[i] + C[i];
    }
    else {
      B[i+1] = B[i];
    }
  }
#ifdef DEBUG
  for(int i=0;i<(int)A.size();i++){
    fprintf(stderr,"%2ld,",A[i]);
  }
  fprintf(stderr,"\n");
  for(int i=0;i<(int)B.size();i++){
    fprintf(stderr,"%2ld,",B[i]);
  }
  fprintf(stderr,"\n");
#endif
  long ans = LONG_MAX;
  for(int i=1;i<N;i++){
    long a = (A[i]-A[0])+(B[N]-B[i]);
    long b = (B[i]-B[0])+(A[N]-A[i]);
#ifdef DEBUG
    fprintf(stderr,"(A[i]-A[0])=%ld,",(A[i]-A[0]));
    fprintf(stderr,"(B[N]-B[i])=%ld,",(B[N]-B[i]));
    fprintf(stderr,"(B[i]-B[0])=%ld,",(B[i]-B[0]));
    fprintf(stderr,"(B[N]-B[i])=%ld\n",(A[N]-A[i]));
#endif
    ans = min({ans,a,b});
  }
  cout << ans << endl;
  return 0;
}
