#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<long> A(N);
  for(auto &itr:A){
    cin >> itr;
  }
  int M;
  cin >> M;
  vector<long> B(M);
  for(auto &itr:B){
    cin >> itr;
  }
  int L;
  cin >> L;
  vector<long> C(L);
  for(auto &itr:C){
    cin >> itr;
  }
  set<long> st;
  for(int i=0;i<N;i++){
    for(int j=0;j<M;j++){
      for(int k=0;k<L;k++){
        st.insert( A[i] + B[j] + C[k] );
      }
    }
  }
  int Q;
  cin >> Q;
  vector<long> X(Q);
  for(auto &itr:X){
    cin >> itr;
  }
  for(auto itr:X){
    string ans = "Yes";
    if ( st.find(itr) == st.end() ) {
      ans = "No";
    }
    cout << ans << endl;
  }
  return 0;
}
