#include <bits/stdc++.h>
using namespace std;
int main(void){
	vector<vector<char>> vec(8,vector<char>(8,' '));
	map<int,int> rows;
	map<int,int> cols;
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			char c;
			cin >> c;
			vec[i][j] = c;
			if ( c == '#' ) {
				rows[i] += 1;
				cols[j] += 1;
			}
		}
	}
	int ans = 0;
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			if ( vec[i][j] == '.' ) {
				if ( rows[i] + cols[j] == 0 ) {
					ans += 1;
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}
