#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,M;
	cin >> N >> M;
	long sum = 0;
	vector<int> A(N);
	for(int i=0;i<N;i++){
		cin >> A[i];
		sum += A[i];
	}
	string ans = "No";
	for(int i=0;i<N;i++){
		if ( M == ( sum - A[i] ) ) {
			ans = "Yes";
			break;
		}
	}
	cout << ans << endl;
	return 0;
}
