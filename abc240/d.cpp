#include <bits/stdc++.h>
using namespace std;
int main(void){
	int H,W;
	cin >> H >> W;
	vector<vector<char>> g(H,vector<char>(W));
	array<set<pair<int,int>>,2> door;
	pair<int,int> start ;
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			char c;
			cin >> c;
			g[i][j] = c;
			if ( c == 'x' ) {
				door[0].insert({i,j});
				g[i][j] = 'd' ;
			}
			else if ( c == 'o' ) {
				door[1].insert({i,j});
				g[i][j] = 'd' ;
			}
			else if ( c == 'S' ) {
				start = { i,j };
			}
		}
	}
	int flg = 0;
	long ans = LONG_MAX;
	function<void(pair<int,int>,array<set<pair<int,int>>,2>&,long)> dfs = 
		[&](pair<int,int> p,array<set<pair<int,int>>,2> &visited,long cnt){
		int h = p.first;
		int w = p.second;
#ifdef DEBUG
		fprintf(stderr,"{%d,%d}\n",h,w);
#endif
		if ( g[h][w] == 'G' ) {
#ifdef DEBUG
			fprintf(stderr,"GOAL(%ld)\n",cnt);
#endif
			ans = std::min(ans,cnt);
			return;
		}
		if ( g[h][w] == '?' ) {
			flg ^= 1;
		}
		vector<pair<int,int>> D = { 
			{-1, 0}, // up
			{ 1, 0}, // down
			{ 0,-1}, // left
			{ 0, 1}  // right
		};
		for(auto d : D ) {
			int x = d.first;
			int y = d.second;
			if ( h+x < 0 || h+x >= H ) {
				continue;
			}
			if ( w+y < 0 || w+y >= W ) {
				continue;
			}
			if ( g[h+x][w+y] == '#' ) {
				continue;
			}
			if ( g[h+x][w+y] == 'd' && door[flg].find({h+x,w+y}) != door[flg].end() ) {
				continue;
			}
			if ( visited[flg].find({h+x,w+y}) != visited[flg].end() ) {
				continue;
			}
			visited[flg].insert({h+x,w+y});
			dfs({h+x,w+y},visited,cnt+1);
			visited[flg].erase({h+x,w+y});
		}
		return;
	};
	array<set<pair<int,int>>,2> st;
	dfs(start,st,0);
	cout << ans << endl;
	return 0;
}
