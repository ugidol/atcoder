#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  map<int,int> mp;
  for(int i=0;i<N;i++){
    int A;
    cin >> A;
    mp[A] += 1;
  }
  long ans = 0;
  for(auto itr : mp){
    int cnt = itr.second / 2;
    ans += cnt;
  }
  cout << ans << endl;
  return 0;
}
