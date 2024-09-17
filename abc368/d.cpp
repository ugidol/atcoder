#include <vector>
#include <set>
#include <functional>
#include <iostream>
using namespace std;
int main(void){
	int N,K;
	cin >> N >> K;
	// グラフ g を隣接リストとして初期化
	vector<vector<int>> g(N,vector<int>(0));
	// N-1 本の辺の情報を入力し、グラフを構築
	for(int i=0;i<N-1;i++){
		int A,B;
		cin >> A >> B;
		A -= 1;
		B -= 1;
		g[A].push_back(B);
		g[B].push_back(A);
	}
	// K個のノードを管理
	vector<bool> V(N);
	for(int i=0;i<K;i++){
		int v;
		cin >> v;
		v -= 1;
		V[v] = true;
	}

	// 探索済みノードを管理するフラグ配列
	vector<bool> visited(N,false);

	// 深さ優先探索(DFS)
	// ノードnの子要素の有効なノード数をカウントして返却
	function<int(int)> dfs = [&](int n){
		int cnt = 0;
		// ノードnを探索済みにする
		visited[n] = true;

		// 未探索の子ノードに対して再帰的にDFS探索
		vector<int>& nodes = g[n];
		for(auto nn:nodes){
			if ( visited[nn] ) {
				continue;
			}
			cnt += dfs(nn);
		}
		// 子ノードに有効なノードがあれば、自分自身もカウント
		if ( cnt > 0 || V[n] ) {
			cnt += 1;
		}
		return cnt;
	};
	
	// 最初に見つけた有効なノードをrootとする
	int root = -1;
	for(int i=0;i<N;i++){
		if ( V[i] ) {
			root = i;
			break;
		}
	}

	// DFS実行
	int ans = dfs(root);
	cout << ans << endl;

	return 0;
}
