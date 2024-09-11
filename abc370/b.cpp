#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	vector<vector<int>> A(N,vector<int>(N));
	for(int i=0;i<N;i++){
		for(int j=0;j<=i;j++){
			cin >> A[i][j] ;
		}
	}
	{
		int i=0;
		for(int j=0;j<N;j++){
			if ( i >= j ) {
				i = A[i][j] - 1 ;
			}
			else {
				i = A[j][i] - 1 ;
			}
		}
		cout << (i+1) << endl;
	}
  return 0;
}
