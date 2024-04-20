#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
int main(void){
	int N,M;
	cin >> N >> M;
  atcoder::dsu uf(N);
  vector<vector<int>> graph(N,vector<int>());
	for(int i=0;i<M;i++){
		int a,b;
		cin >> a >> b;
		a -= 1;
		b -= 1;
		uf.merge(a,b);
    graph[a].push_back(b);
    graph[b].push_back(a);
	}
  long ans = 0;
  auto groups = uf.groups();
  for(auto group:groups){
    long a = group.size();
    ans += a*(a-1)/2;
  }
  ans -= M;
  cout << ans << endl;
	return 0;
}
