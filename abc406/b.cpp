#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,K;
	cin >> N >> K ;
	vector<long> A(N);
	for(int i=0;i<N;i++){
		cin >> A[i];
	}
	long ans = 1;
	for(int i=0;i<N;i++){
		ans *= A[i];
		string s = to_string(ans);
		if ( s.length() > K ) {
			ans = 1;
		}
	}
	cout << ans << endl;
	return 0;
}
