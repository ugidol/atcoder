#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,K;
	cin >> N >> K;
	vector<int> A(N);
	for(int i=0;i<N;i++){
		cin >> A[i];
	}
	int ans = 0;
	int k = K;
	for(int i=0;i<N;){
		if ( A[i] <= k ) {
			k -= A[i];
			i += 1;
			continue;
		}
		else {
			ans += 1;
			k = K;
		}
	}
	if ( k < K ) {
		ans += 1;
	}
	cout << ans << endl;
  return 0;
}
