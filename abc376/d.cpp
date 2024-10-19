#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,M;
	cin >> N >> M;
	vector<vector<int>> G(N,vector<int>());
	for(int i=0;i<M;i++){
		int a,b;
		cin >> a >> b ;
		a--,b--;
		G[a].push_back(b);
	}
	//
	vector<int> distance(N,-1);
	queue<int> que;
	vector<bool> visited(N,false);
	visited[0] = true;
	distance[0] = 0;
	que.push(0);
	int ans = -1;
	while( ! que.empty() ) {
		int v = que.front();
		que.pop();
		for(auto itr:G[v]){
			if ( itr == 0 ) {
				ans = distance[v]+1;
				cout << ans << endl;
				exit(0);
			}
			if ( visited[itr] ) {
				continue;
			}
			visited[itr] = true;
			distance[itr] = distance[v]+1;
			que.push(itr);
		}
	}
	cout << ans << endl;
	return 0;
}
