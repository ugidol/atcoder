#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,M;
	cin >> N >> M;
	vector<int> A(M);
	for(int i=0;i<M;i++){
		cin >> A[i];
	}
	vector<vector<int>> X(N, vector<int>(M));
	vector<int> sm(M,0);
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			cin >> X[i][j];
			sm[j] += X[i][j];
		}
	}
	bool ans = true;
	for(int i=0;i<M;i++){
		if ( sm[i] < A[i] ) {
			ans = false;
			break;
		}
	}
	if ( ans ) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	//
  return 0;
}
