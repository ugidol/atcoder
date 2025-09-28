#include <bits/stdc++.h>
using namespace std;


#ifdef DEBUG
template <typename ... Args>
std::string format(const std::string& fmt, Args ... args){
	size_t len = std::snprintf(nullptr,0,fmt.c_str(), args ... );
	std::vector<char> buff(len+1);
	std::snprintf(&buff[0], len+1, fmt.c_str(), args ... );
	return std::string(&buff[0], &buff[0]+len);
}
void debug(vector<int> &vec){
	std::stringstream ss;
	for(auto &v:vec){
		ss << format("%4d,",v);
	}
	cerr << ss.str() << endl;
}
void debug(vector<vector<int>> &vec){
	for(auto &v:vec){
		debug(v);
	}
}
#endif


int main(void){
	int H,W;
	cin >> H >> W;
	vector<vector<char>> S(H,vector<char>(W,' '));
	vector<vector<int>> vec;
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			cin >> S[i][j];
			if ( S[i][j] == 'E' ) {
				vec.push_back({i,j});
			}
		}
	}
	vector<vector<int>> g(H,vector<int>(W,INT_MAX));
	vector<vector<char>> ans = S;
	//
	set<pair<int,int>> visited;
	queue<vector<int>> que ;
	function<void(void)> bfs = [&](void){
		while( ! que.empty() ) {
			vector<int> v = que.front();que.pop();
			int i = v[0];
			int j = v[1];
			vector<vector<int>> d = {{-1,0},{+1,0},{0,-1},{0,+1}};
			vector<char> a = {'v','^','>','<'};
			for(int k=0;k<4;k++){
				vector<int> &dd = d[k];
				int ii = v[0] + dd[0];
				int jj = v[1] + dd[1];
				if ( ii < 0 || ii >= H ) {
					continue;
				}
				if ( jj < 0 || jj >= W ) {
					continue;
				}
				if ( S[ii][jj] == '#' ) {
					continue;
				}
				if ( S[ii][jj] == 'E' ) {
					continue;
				}
				if ( visited.find({ii,jj}) != visited.end() ) {
					continue;
				}
				visited.insert({ii,jj});
				if ( g[ii][jj] >= ( g[i][j] + 1 ) ) {
					g[ii][jj] = g[i][j] + 1;
					ans[ii][jj] = a[k];
					que.push({ii,jj});
				}
			}
		}
	};
	//
	for(auto v:vec){
		int x = v[0];
		int y = v[1];
		visited.insert({x,y});
		que.push({x,y});
		g[x][y] = 0;
	}
	bfs();
	//
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			cout << ans[i][j] ;
		}
		cout << endl;
	}
	return 0;
}
