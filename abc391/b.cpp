#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,M;
	cin >> N >> M ;
	vector<vector<char>> S(N,vector<char>(N));
	vector<vector<char>> T(M,vector<char>(M));
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cin >> S[i][j];
		}
	}
	for(int i=0;i<M;i++){
		for(int j=0;j<M;j++){
			cin >> T[i][j];
		}
	}
	function<bool(int x,int y)> f = [&](int x,int y){
		bool ret = true;
		for(int i=0;i<M;i++){
			for(int j=0;j<M;j++){
				if ( x+i >= N ) {
					ret = false;
					break;
				}
				if ( y+j >= N ) {
					ret = false;
					break;
				}
				if ( S[x+i][y+j] != T[i][j] ) {
					ret = false;
					break;
				}
			}
		}
		return ret;
	};
	//
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			bool b = f(i,j);
			if ( b ) {
				cout << (i+1) << ' ' << (j+1) << endl;
				return 0;
			}
		}
	}
	return 0;
}
