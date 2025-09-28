#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	vector<unsigned long long> A(N);
	unsigned long long sm = 0;
	for(int i=0;i<N;i++){
		cin >> A[i];
		sm += A[i];
	}
	unsigned long long ans = 0;
	for(int i=0;i<N;i++){
		ans += ( A[i] * ( sm - A[i] ) );
		sm -= A[i];
	}
	cout << ans << endl;
	return 0;
}
