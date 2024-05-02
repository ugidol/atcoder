#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	vector<vector<int>> vec(N+1,vector<int>(N+1));
	for(int i=1;i<=N;i++){
		for(int j=1;j<=i;j++){
			if ( j == 0 || j == i ) {
				vec[i][j] = 1;
			}
			else {
				vec[i][j] = vec[i-1][j-1] + vec[i-1][j];
			}
		}
	}
	for(int i=1;i<=N;i++){
		for(int j=1;j<=i;j++){
			cout << vec[i][j] << ' ';
		}
		cout << endl;
	}
  return 0;
}
