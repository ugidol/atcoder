#include <vector>
#include <set>
#include <functional>
#include <iostream>
using namespace std;
int main(void){
	int N,K;
	cin >> N >> K;
	vector<vector<int>> g(N,vector<int>(0));
	for(int i=0;i<N-1;i++){
		int A,B;
		cin >> A >> B;
		A -= 1;
		B -= 1;
		g[A].push_back(B);
		g[B].push_back(A);
	}
	vector<bool> V(N);
	for(int i=0;i<K;i++){
		int v;
		cin >> v;
		v -= 1;
		V[v] = true;
	}
	int root = -1;
	for(int i=0;i<N;i++){
		if ( V[i] ) {
			root = i;
			break;
		}
	}

	vector<bool> visited(N,false);
	function<int(int)> dfs = [&](int n){
		visited[n] = true;
		vector<int>& nodes = g[n];
		int cnt = 0;
		for(auto nn:nodes){
			if ( visited[nn] ) {
				continue;
			}
			cnt += dfs(nn);
		}
		if ( cnt > 0 || V[n] ) {
			cnt += 1;
		}
		return cnt;
	};
	int ans = dfs(root);
	cout << ans << endl;

	return 0;
}
