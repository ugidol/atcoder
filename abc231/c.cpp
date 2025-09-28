#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,Q;
  cin >> N >> Q ;
  vector<long long> A(N);
  for(auto &itr:A){
    cin >> itr;
  }
  sort(A.begin(), A.end());
  for(int i=0;i<Q;i++){
    long long x;
    cin >> x;
    auto itr = lower_bound(A.begin(), A.end(), x);
    long long ans = distance(itr,A.end());
    cout << ans << endl;
  }
  return 0;
}
