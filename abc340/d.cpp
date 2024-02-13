#include <bits/stdc++.h>
using namespace std;
const long long INF = ( 2 * 1e14 ) + 1;
int main() {
  int N;
  cin >> N;
  vector<vector<pair<int,long long>>> G(N,vector<pair<int,long long>>());
  for(int i=0;i<N-1;i++){
    long long A,B,X;
    cin >> A >> B >> X ;
    X -= 1;
    G[i].push_back({i+1,A});
    G[i].push_back({X  ,B});
  }
  //
  vector<long long> dist(N,INF);
  priority_queue<pair<long long,int>,vector<pair<long long,int>>,std::greater<pair<long long,int>>> pq;
  dist[0] = 0;
  pq.push({0,0});
  while( ! pq.empty() ){
    pair<long long,int> elem = pq.top(); pq.pop();
    int n = elem.second;
    long long d = elem.first;
    if ( d > dist[n] ) {
      continue;
    }
#ifdef DEBUG
    fprintf(stderr,"v=[%d],d=[%lld]\n",n+1,d);
#endif
    for(auto node:G[n]){
      int nn = node.first;
      long long dd = node.second;

      long long new_distance = dist[n] + dd;
      if ( dist[nn] > new_distance ) {
        dist[nn] = new_distance;
        pq.push({new_distance,nn});
      }
    }
  }
  cout << dist[N-1] << endl;
  return 0;
}

