#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<int> A(N);
  for(int i=0;i<N;i++){
    cin >> A[i];
  }
  vector<int> B(N);
  for(int i=0;i<N;i++){
    cin >> B[i];
  }
  // 
  int start = *max_element(A.begin(), A.end());
  int end = *min_element(B.begin(), B.end());
  int ans = 0;
  if ( end - start  >= 0 ) {
    ans = ( end - start ) + 1  ;
  }
  cout << ans << endl;
  return 0;
}
