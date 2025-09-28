#include <bits/stdc++.h>
using namespace std;
int main(void){
	int H,W,X,Y;
	cin >> H >> W >> X >> Y;
	X -= 1;
	Y -= 1;
	vector<string> g(H);
	for(int i=0;i<H;i++){
		cin >> g[i] ;
	}
	string T;
	cin >> T;
	set<pair<int,int>> st;
	function<bool(int,int)> f = [&](int x, int y){
		char c = g[x][y];
		if ( c == '#' ) {
			return false;
		}
		if ( c == '@' ) {
			st.insert ( make_pair(x,y) ) ;
		}
		return true;
	};
	for(int i=0;i<(int)T.size();i++){
		char c = T[i];
		if ( c == 'U' && f(X-1,Y) ) {
			X -= 1;
		}
		else if ( c == 'D' && f(X+1,Y) ) {
			X += 1;
		}
		else if ( c == 'L' && f(X,Y-1) ) {
			Y -= 1;
		}
		else if ( c == 'R' && f(X,Y+1) ) {
			Y += 1;
		}
	}
	cout << X+1 << ' ' << Y+1 << ' ' << st.size() << endl;
	return 0;
}
