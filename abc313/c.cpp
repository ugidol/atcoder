#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<int> A(N);
  for(int i=0;i<N;i++){
    cin >> A[i];
  }
  long sm = 0;
  for(auto itr:A){
    sm += itr;
  }
  long avrg = ( sm / N );
  vector<int> B(N,avrg);
  for(int i=0;i<(sm%N);i++){
    B[i] += 1;
  }
  sort(A.begin(), A.end());
  sort(B.begin(), B.end());
  long ans = 0;
  for(int i=0;i<N;i++){
    if ( A[i] - B[i] > 0 ) {
      ans += (A[i]-B[i]);
    }
  }
  cout << ans << endl;
  return 0;
}
