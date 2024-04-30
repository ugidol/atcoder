#include <bits/stdc++.h>
using namespace std;

int main(void){
	int N;
	cin >> N;
	vector<vector<int>> A(N,vector<int>(N));
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cin >> A[i][j];
		}
	}
	vector<vector<int>> B(N,vector<int>(N));
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cin >> B[i][j];
		}
	}
	vector<vector<int>> tmp(N,vector<int>(N));
	function<void(vector<vector<int>>&)> rotate = [&](vector<vector<int>>&vec){
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				tmp[i][j] = vec[N-j-1][i];
			}
		}
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				vec[i][j] = tmp[i][j];
			}
		}
	};
	function<bool(vector<vector<int>>&, vector<vector<int>>&)> f = [&](vector<vector<int>> &a,vector<vector<int>> &b){
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				if ( a[i][j] == 1 && b[i][j] != 1 ) {
					return false;
				}
			}
		}
		return true;
	};
	string ans = "No";
	for(int i=0;i<4;i++){
		if ( f(A,B) ) {
			ans = "Yes";
			break;
		}
		rotate(A);
	}
	cout << ans << endl;
  return 0;
}
