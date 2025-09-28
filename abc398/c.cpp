#include <bits/stdc++.h>
using namespace std;

int main(void){
	int N;
	cin >> N;
	vector<int> A(N+2);
	map<int,int> mp;
	for(int i=0;i<N;i++){
		cin >> A[i+1];
		mp[ A[i+1] ] = i+1;
	}
	A[0] = 0;
	A[N+1] = 1e9+1;
	sort(A.begin(), A.end());
	int ans = -1;
	for(int i=0;i<N;i++){
		int idx = N-i;
		if ( A[idx] != A[idx+1] && A[idx] != A[idx-1] ) {
			ans = mp[ A[idx] ] ;
			break;
		}
	}
	cout << ans << endl;
	return 0;
}
