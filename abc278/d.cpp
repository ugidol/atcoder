#include <bits/stdc++.h>
using namespace std;
typedef struct {
  int idx;
  long value;
} DATA;
int main(void){
  int N;
  cin >> N;
  vector<DATA> A(N);
  for(int i=0;i<N;i++){
    cin >> A[i].value;
  }
  DATA base = {0,0};
  int Q;
  cin >> Q;
  vector<long> ans;
  for(int i=0;i<Q;i++){
    int q;
    cin >> q;
    if ( q == 1 ) {
      long x;
      cin >> x;
      base.idx = i+1;
      base.value = x;
    }
    else if ( q == 2 ) {
      int idx;
      cin >> idx;
      idx -= 1;
      long x ;
      cin >> x;
      if ( A[idx].idx < base.idx ) {
        A[idx].idx = i+1;
        A[idx].value = x;
      }
      else {
        A[idx].idx = i+1;
        A[idx].value += x;
      }
    }
    else if ( q == 3 ) {
      int idx;
      cin >> idx;
      idx -= 1;
      if ( A[idx].idx < base.idx ) {
        ans.push_back(base.value);
      }
      else {
        ans.push_back(base.value + A[idx].value);
      }
    }
  }
  for(auto itr:ans){
    cout << itr << endl;
  }
  return 0;
}
