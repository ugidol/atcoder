#include <vector>
#include <set>
#include <queue>
#include <functional>
#include <iostream>
using namespace std;
int main(void){
	int N,K;
	cin >> N >> K;
	// グラフ g を隣接リストとして初期化
	vector<set<int>> g(N,set<int>());
	// N-1 本の辺の情報を入力し、グラフを構築
	for(int i=0;i<N-1;i++){
		int A,B;
		cin >> A >> B;
		A -= 1;
		B -= 1;
		g[A].insert(B);
		g[B].insert(A);
	}
	// K個のノードを管理
	vector<bool> V(N);
	for(int i=0;i<K;i++){
		int v;
		cin >> v;
		v -= 1;
		V[v] = true;
	}

	// リーフノードをキューに追加
	queue<int> que ;
	for(int i=0;i<N;i++){
		if ( g[i].size() == 1 ) {
			que.push(i);
		}
	}

	// 幅優先探索(BFS)
	// Vに含まれないリーフノードを削除して残ったノード数を返却
	function<int(void)> bfs = [&](void){
		int cnt = N;
		while(!que.empty()){
			int n = que.front();
			que.pop();

			// Vに含まれるノードは削除しない
			if ( V[n] ) {
				continue;
			}
			
			// ノードnの削除
			int nn = *g[n].begin();
			g[n].clear();
			g[nn].erase(n);
			cnt -= 1;

			// 隣接ノードがリーフノードになった場合、キューに追加
			if ( g[nn].size() == 1 ) {
				que.push(nn);
			}
		}
		return cnt;
	};

	// BFS実行
	int ans = bfs();
	cout << ans << endl;
	return 0;
}
