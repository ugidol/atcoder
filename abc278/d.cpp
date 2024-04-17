#include <bits/stdc++.h>
using namespace std;
//
typedef struct {
  int idx;    //
  long value; //
} DATA;
int main(void){
  // INPUT
  int N;
  cin >> N;
  vector<DATA> A(N);
  for(int i=0;i<N;i++){
    cin >> A[i].value;
  }
  // solve
  DATA base = {0,0};
  int Q;
  cin >> Q;
  vector<long> ans;
  for(int i=1;i<=Q;i++){
    int q;
    cin >> q;
    if ( q == 1 ) {
      long x;
      cin >> x;
      base.idx = i;
      base.value = x;
    }
    else if ( q == 2 ) {
      int idx;
      long x;
      cin >> idx >> x ;
      idx -= 1;
      A[idx].idx = i;
      if ( A[idx].idx < base.idx ) {
        A[idx].value = x;
      }
      else {
        A[idx].value += x;
      }
    }
    else if ( q == 3 ) {
      int idx;
      cin >> idx;
      idx -= 1;
      long value = base.value;
      if ( base.idx < A[idx].idx ) {
        value += A[idx].value;
      }
      ans.push_back(value);
    }
  }
  // answer
  for(auto itr:ans){
    cout << itr << endl;
  }
  return 0;
}
