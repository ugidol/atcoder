#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	vector<vector<char>> A(N,vector<char>(N));
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cin >> A[i][j];
		}
	}
	vector<vector<char>> B(N,vector<char>(N));
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cin >> B[i][j];
		}
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if ( A[i][j] != B[i][j] ) {
				cout << i + 1 << ' ' << j + 1 << endl;
				goto EOL;
			}
		}
	}
EOL:
  return 0;
}
