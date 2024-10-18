#include <bits/stdc++.h>
using namespace std;

int main(void){
	int H,W;
	cin >> H >> W;
	int si, sj;
	cin >> si >> sj;
	si-=1;
	sj-=1;
	// H x W のマス
	vector<vector<char>> C(H,vector<char>(W));
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			cin >> C[i][j];
		}
	}
	string X;
	cin >> X;
	for(int i=0;i<X.size();i++){
		char x = X[i];
		switch(x){
			// 左に移動可能なら、移動する
			case 'L':
				if ( sj > 0 && C[si][sj-1]=='.' ) {
					sj-=1;
				}
				break;
			// 右に移動可能なら、移動する
			case 'R':
				if ( sj < W-1 && C[si][sj+1]=='.'){
					sj+=1;
				}
				break;
			// 上に移動可能なら、移動する
			case 'U':
				if ( si > 0 && C[si-1][sj]=='.'){
					si-=1;
				}
				break;
			// 下に移動可能なら、移動する
			case 'D':
				if ( si < H-1 && C[si+1][sj]=='.'){
					si+=1;
				}
				break;
		}
	}
	cout << si+1 << ' ' << sj+1 << endl;
	return 0;
}
