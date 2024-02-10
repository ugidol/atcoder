#include <bits/stdc++.h>
using namespace std;
int main(void){
  int Q;
  cin >> Q;
  vector<int> A;
  for(int i=0;i<Q;i++){
    int q;
    cin >> q;
    if ( q == 1 ) {
      int x;
      cin >> x;
      A.push_back(x);
    }
    else if ( q == 2 ) {
      int k;
      cin >> k;
      cout << A[ A.size() - k ] << endl;
    }
  }
  return 0;
}
