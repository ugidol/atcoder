#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,K;
  cin >> N >> K;
  vector<int> A(N);
  vector<int> ans(0);
  for(int i=0;i<N;i++){
    cin >> A[i];
    if ( A[i] % K == 0 ) {
      ans.push_back(A[i]/K);
    }
  }
  for(auto itr:ans){
    cout << itr << ' ' ;
  }
  cout << endl;
  return 0;
}
