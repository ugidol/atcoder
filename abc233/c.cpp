#include <bits/stdc++.h>
using namespace std;
unsigned long long x ;
unsigned long long ans ;
void func(vector<vector<long>> &vec, vector<long> &stk){
  if ( stk.size() == vec.size() ) {
    unsigned long long value = 1 ;
    for(long l : stk ) {
      value *= l ;
      if ( value > x ) {
        return ;
      }
    }
    if ( value == x ) {
      ans += 1 ;
    }
    return ;
  }
  vector<long> &v = vec[stk.size()];
  for(long l : v ) {
    stk.push_back(l);
    func(vec, stk);
    stk.pop_back();
  }
  return ;
}
int main(void){
  long n;
  cin >> n >> x ;
  vector<vector<long>> fukuro(n);
  for(long i=0;i<n;i++){
    long l;
    cin >> l;
    vector<long> vec(l);
    for(long j=0;j<l;j++){
      cin >> vec[j] ;
    }
    fukuro[i] = vec;
  }
  //
  vector<long> stk ;
  func(fukuro,stk);
  cout << ans << endl;
  //
  return 0;
}
