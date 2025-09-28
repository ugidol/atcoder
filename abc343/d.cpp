#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,T;
  cin >> N >> T;
  vector<long> vec(N);
  map<long,long> mp;
  mp[0] = N;
  for(int i=0;i<T;i++){
    int A,B;
    cin >> A >> B;
    A--;
    long prev = vec[A];
    vec[A] += B;
    long aft = vec[A];
    mp[prev] -= 1;
    if ( mp[prev] <= 0 ) {
      mp.erase(prev);
    }
    mp[aft] += 1;
    cout << mp.size() << endl;
  }
  return 0;
}
