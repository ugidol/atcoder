#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,M;
  long long T;
  cin >> N >> M >> T;
  vector<int> A(N);
  for(int i=1;i<N;i++){
    cin >> A[i] ;
  }
  vector<int> B(N+1);
  for(int i=0;i<M;i++){
    int x,y;
    cin >> x >> y;
    B[x] = y;
  }
  string ans = "Yes";
  for(int i=1;i<N;i++){
    if ( T <= A[i] ) {
      ans = "No";
      break;
    }
    T -= A[i];
    T += B[i+1];
  }
  cout << ans << endl;
  return 0;
}
