#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N ;
  vector<long long> A(N+1);
  for(int i=0;i<N;i++){
    long long a;
    cin >> a;
    A[i+1] = a;
  }
  vector<long long> B(N+1);
  for(int i=0;i<N;i++){
    B[i+1] = B[i] + A[i+1];
  }
  long long ans = abs(*min_element(B.begin(),B.end())) + B[N];
  cout << ans << endl;
  return 0;
}
