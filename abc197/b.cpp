#include <bits/stdc++.h>
using namespace std;
int main(void){
	// 入力読取(Height,Width,X,Y);
	int H,W,X,Y;
	cin >> H >> W >> X >> Y;
	// 入力読取(２次元配列)
	vector<string> vec(H);
	for(int i=0;i<H;i++){
		string s;
		cin >> s;
		vec[i] = s;
	}
	// X,Y を 0-indexed にする.
	X -= 1;
	Y -= 1;
	int ans = -3;
	// 4方向に探索
	vector<array<int,2>> D = { {-1,0},{1,0},{0,-1},{0,1}};
	for(auto [dx,dy]:D){
		int x = X;
		int y = Y;
		// '#'になったら探索終了
		while( 0 <= x && x < H && 0 <= y && y < W && vec[x][y]!='#'){
#ifdef DEBUG
			fprintf(stderr,"{%d,%d}=[%c]\n",x,y,vec[x][y]);
#endif
			x += dx;
			y += dy;
			ans += 1;
		}
	}
	cout << ans << endl;
	return 0;
}
