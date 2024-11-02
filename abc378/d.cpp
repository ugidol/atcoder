#include <bits/stdc++.h>
using namespace std;
int main(void){
	int H,W,K;
	cin >> H >> W >> K;
	vector<string> g(H);
	for(int i=0;i<H;i++){
		string s;
		cin >> s;
		g[i] = s;
	}
	vector<array<int,2>> dir = { {1,0},{0,1},{-1,0},{0,-1}};
	long ans = 0;
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			if ( g[i][j] == '#' ) {
				continue;
			}
			set<pair<int,int>> st;
			//
			function<void(int,int,int)> dfs = [&](int x,int y, int k){
				pair<int,int> p = make_pair(x,y);
				if ( k == K ) {
					ans += 1;
					return;
				}
				st.insert(p);
				for(auto d:dir){
					int xx = x + d[0];
					int yy = y + d[1];
					if ( xx < 0 || xx >= H || yy < 0 || yy >= W || g[xx][yy] == '#' ) {
						continue;
					}
					pair<int,int> pp = make_pair(xx,yy);
					if ( st.find(pp) == st.end() ) {
						dfs(xx,yy,k+1);
					}
				}
				st.erase(p);
			};
			//
			int k=0;
			dfs(i,j,k);
		}
	}
	cout << ans << endl;
	return 0;
}
