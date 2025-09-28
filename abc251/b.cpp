#include <bits/stdc++.h>
using namespace std;
int main(void){
  long N,W;
  cin >> N >> W;
  vector<int> A(N);
  for(int i=0;i<N;i++){
    cin >> A[i];
  }
  //
  set<long> st;
  for(int i=0;i<N;i++){
    if ( A[i] <= W ) {
      st.insert(A[i]);
    }
  }
  //
  for(int i=0;i<N;i++){
    for(int j=i+1;j<N;j++){
      if ( A[i] + A[j] <= W ) {
        st.insert(A[i]+A[j]);
      }
    }
  }
  //
  for(int i=0;i<N;i++){
    for(int j=i+1;j<N;j++){
      for(int k=j+1;k<N;k++){
        if ( A[i] + A[j] + A[k] <= W ) {
          st.insert(A[i]+A[j]+A[k]);
        }
      }
    }
  }
  //
  cout << st.size() << endl;
  //
  return 0;
}
