#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<long long> A(N);
  set<long long> odd;
  set<long long> even;
  for(auto &itr:A){
    cin >> itr;
    if ( itr % 2 == 1 ) {
      odd.insert(itr);
    }
    else {
      even.insert(itr);
    }
  }
  long long ans = -1;
  if ( odd.size() > 1 ) {
    long long tmp = 0;
    auto itr = odd.end();
    itr--;
    tmp += *itr;
    itr--;
    tmp += *itr;
    ans = max(ans, tmp);
  }
  if ( even.size() > 1 ) {
    long long tmp = 0;
    auto itr = even.end();
    itr--;
    tmp += *itr;
    itr--;
    tmp += *itr;
    ans = max(ans, tmp);
  }
  cout << ans << endl;
  return 0;
}
