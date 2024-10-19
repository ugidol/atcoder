#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	vector<int> A(N);
	for(int i=0;i<N;i++){
		cin >> A[i];
	}
	std::sort(A.begin(), A.end(), std::greater<int>());
	vector<int> B(N-1);
	for(int i=0;i<N-1;i++){
		cin >> B[i];
	}
	std::sort(B.begin(), B.end(), std::greater<int>());
	int ans = 0;
	int x = 0;
	int iA=0,iB=0;
	for(int i=0;i<N;i++,iA++,iB++){
		if ( A[iA] <= B[iB] ) {
			continue;
		}
		// A[i] > B[i]
		if ( x != 0 ) {
			ans = -1;
			break;
		}
		ans = x = A[i];
		iB--;
	}
	cout << ans << endl;
	return 0;
}
