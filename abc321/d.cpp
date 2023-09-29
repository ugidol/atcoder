#include <bits/stdc++.h>
using namespace std;
int main(void){
  long long N,M,P;
  cin >> N >> M >> P;
  vector<long long> A(N);
  for(auto &itr:A){
    cin >> itr;
  }
  vector<long long> B(M);
  for(auto &itr:B){
    cin >> itr;
  }
  sort(A.begin(),A.end());
  sort(B.begin(),B.end());
  vector<long long> s(M+1);
  s[0] = 0;
  for(int i=0;i<M;i++){
    s[i+1] = s[i] + B[i];
  }
  long long ans = 0;
  for(auto a : A){
    long long v = max(0ll,P - a);
    auto itr1 = lower_bound(B.begin(), B.end(), v);
    //
    long long d = distance(B.begin(),itr1);
    long long num1 = B.size() - d;
    ans += num1 * P ;
    //
    ans += s[d];
    ans += d * a;
  }
  cout << ans << endl;
  return 0;
}
