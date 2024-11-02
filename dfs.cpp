			// ABC378 D
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

