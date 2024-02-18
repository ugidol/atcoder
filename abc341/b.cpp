#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<long long> A(N);
  for(int i=0;i<N;i++){
    cin >> A[i];
  }
  vector<long long> S(N);
  vector<long long> T(N);
  for(int i=0;i<N-1;i++){
    cin >> S[i] >> T[i];
  }
  for(int i=0;i<N-1;i++){
    long long n = A[i] / S[i];
    A[i] -= n * S[i] ;
    A[i+1] += n * T[i];
#ifdef DEBUG
    for(int j=0;j<N;j++){
      fprintf(stderr,"%lld,",A[j]);
    }
    fprintf(stderr,"\n");
#endif
  }
  cout << A[N-1] << endl;
  return 0;
}
