#include <bits/stdc++.h>
using namespace std;
int main(void){
	int H,W;
	cin >> H >> W;
	vector<vector<int>> g(H,vector<int>(W,0));
	vector<vector<bool>> domino(H,vector<bool>(W,true));
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			cin >> g[i][j];
		}
	}
	long ans = 0;
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			ans = ans ^ g[i][j];
		}
	}
	//
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			// ドミノ置けるかな？
			if ( ! domino[i][j] ) {
				continue;
			}
			vector<int> vec(5,-1);
			vec[4] = ans; // 置かない場合
			long tmp = ans ^ g[i][j];
			// 上に置けるかな
			if ( i > 0 && domino[i-1][j] ) {
				vec[0] = tmp ^ g[i-1][j];
			}
			// 右に置けるかな
			if ( j < (W-1) && domino[i][j+1] ) {
				tmp = tmp ^ g[i][j+1];
				vec[1] = tmp ^ g[i][j+1];
			}
			// 下に置けるかな
			if ( i < (H-1) && domino[i+1][j] ) {
				tmp = tmp ^ g[i+1][j];
				vec[2] = tmp ^ g[i+1][j];
			}
			// 左に置けるかな
			if ( j > 0 && domino[i][j-1] ) {
				tmp = tmp ^ g[i][j-1];
				vec[3] = tmp ^ g[i][j-1];
			}
			auto it = std::max_element(vec.begin(), vec.end());
			int idx = std::distance(vec.begin(), it);
			if ( idx == 0 ) {
				// 上に置く
				ans = vec[0];
				domino[i][j] = false;
				domino[i-1][j] = false;
			} else if ( idx == 1 ) {
				// 右に置く
				ans = vec[1];
				domino[i][j] = false;
				domino[i][j+1] = false;
			} else if ( idx == 2 ) {
				// 下に置く
				ans = vec[2];
				domino[i][j] = false;
				domino[i+1][j] = false;
			} else if ( idx == 3 ) {
				// 左に置く
				ans = vec[3];
				domino[i][j] = false;
				domino[i][j-1] = false;
			}
			else {
				// 置けない
				continue;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
