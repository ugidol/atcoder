#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  map<int,priority_queue<int,vector<int>,less<int>>> mq;
  map<int,int> mp;
  for(int i=0;i<N;i++){
    int F,S;
    cin >> F >> S;
    fprintf(stderr,"mq[F].size()=%ld\n",mq[F].size());
    if ( mq[F].size() >= 2 ) {
      mq[F].pop();
    }
    mq[F].push(S);
    if ( mp[F] < S ) {
      mp[F] = S;
    }
  }
  int ans = 0;
  for(auto itr:mq){
    priority_queue<int,vector<int>,less<int>> q = itr.second;
    if ( q.size() >= 2 ) {
      int t = q.top();q.pop();
      int s = q.top();q.pop();
      if ( s < t ) {
        swap(s,t);
      }
      ans = max(ans,  s + ( t/2 ) );
      if ( ans == 1372812888 ) {
        fprintf(stderr,"F=%d,t=%d,s=%d\n",itr.first,t,s);
      }
    }
  }
  vector<int> vec;
  for(auto itr:mp){
    vec.push_back(itr.second);
  }
  sort(vec.begin(), vec.end());
  reverse(vec.begin(), vec.end());
  if ( vec.size() >= 2 ) {
    ans = max(ans, vec[0]+vec[1]);
    if ( ans == 1372812888 ) {
      fprintf(stderr,"vec=%d,%d\n",vec[0],vec[1]);
    }
  }
  cout << ans << endl;
  return 0;
}
