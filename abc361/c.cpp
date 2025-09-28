#include <bits/stdc++.h>
using namespace std;
const long INF = (long)1e9+1;
int main(void){
	int N,K;
	cin >> N >> K;
	vector<long> A(N);
	for(int i=0;i<N;i++){
		cin >> A[i];
	}
	sort(A.begin(), A.end());
	long ans = INF;
	for(int l=0;l<N-K;l++){
		int r = l+(N-K-1);
		if ( r >= N ) {
			break;
		}
		ans = min(ans,A[r] - A[l]);
	}
	if ( ans == INF ) {
		ans = 0;
	}
	cout << ans << endl;
  return 0;
}
