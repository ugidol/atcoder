#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  priority_queue<pair<int,int>> pq;
  map<int,int> mp;
  for(int i=0;i<N;i++){
    int a,c;
    cin >> a >> c;
    if ( mp.count(c) == 0 ) {
      mp[c] = a;
    }
    else {
      if ( mp[c] > a ) {
        mp[c] = a;
      }
    }
    pq.push(make_pair(a,c));
  }
#ifdef DEBUG
  for(auto itr:mp){
    fprintf(stderr,"%d,%d\n",itr.first,itr.second);
  }
#endif
  int ans = -1;
  while(!pq.empty()){
    pair<int,int> p = pq.top();pq.pop();
    int a = p.first;
    int c = p.second;
    if ( mp[c] == a ) {
      ans = a;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
