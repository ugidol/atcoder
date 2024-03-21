#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<long> A(N);
  for(int i=0;i<N;i++){
    cin >> A[i];
  }
  vector<long> B(N);
  for(int i=1;i<N;i++){
    B[i] = B[i-1];
    if ( i % 2 == 0 ) {
      B[i] += (A[i]-A[i-1]);
    }
  }
#ifdef DEBUG
  for(int i=0;i<N;i++){
    fprintf(stderr,"%4ld,",A[i]);
  }
  fprintf(stderr,"\n");
  for(int i=0;i<N;i++){
    fprintf(stderr,"%4ld,",B[i]);
  }
  fprintf(stderr,"\n");
#endif
  int Q;
  cin >> Q;
  for(int i=0;i<Q;i++){
    int L,R;
    cin >> L >> R;
  }
  return 0;
}
