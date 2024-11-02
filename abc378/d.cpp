#include <bits/stdc++.h>
using namespace std;
int main(void){
	// 入力読取
	int H,W,K;
	cin >> H >> W >> K;
	vector<string> g(H);
	for(int i=0;i<H;i++){
		string s;
		cin >> s;
		g[i] = s;
	}
	// 4方向への移動を示す定数
	vector<array<int,2>> dir = { 
		{-1, 0}, // UP
		{ 1, 0}, // DOWN
		{ 0,-1}, // LEFT
		{ 0, 1}, // RIGHT
	};
	long ans = 0;
	// H * W の各グリッドについてdfs
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			// 壁は探索不要
			if ( g[i][j] == '#' ) {
				continue;
			}
			// --------------------------------------------------------------------------
			// DFS(深さ優先探索)
			function<void(int,int,int,set<pair<int,int>>&)> dfs = [&](int x,int y, int depth, set<pair<int,int>> &visited){
				// 移動回数がKになったら探索終了
				if ( depth == K ) {
					ans += 1;
					return;
				}
				// {x,y}を探索済みにする
				visited.insert({x,y});
				// ４方向についてdfs
				for(auto d:dir){
					int xx = x + d[0];
					int yy = y + d[1];
					// 範囲外と壁は探索不要
					if ( xx < 0 || xx >= H || yy < 0 || yy >= W || g[xx][yy] == '#' ) {
						continue;
					}
					// 探索済みは探索しない
					if ( visited.find({xx,yy}) != visited.end() ) {
						continue;
					}
					// dfs再帰
					dfs(xx,yy,depth+1,visited);
				}
				// 未探索状態に戻す
				visited.erase({x,y});
			};
			// --------------------------------------------------------------------------
			
			// グリッド[i][j]についてDFS
			set<pair<int,int>> st;
			int k=0;
			dfs(i,j,k,st);
		}
	}
	cout << ans << endl;
	return 0;
}
