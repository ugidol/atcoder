#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,M;
	cin >> N >> M ;
	vector<int> A(N);
	for(int i=0;i<N;i++){
		cin >> A[i];
	}
	vector<int> B(M);
	for(int i=0;i<M;i++){
		cin >> B[i];
	}
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	B.push_back(0);
	int i=0;
	int j=0;
	long ans = 0;
	while(i<N&&j<M){
		if ( B[j] > A[i] ) {
			i += 1;
			continue;
		}
		ans += A[i];
		j += 1;
		i += 1;
	}
	if ( j < M ) {
		ans = -1;
	}
	cout << ans << endl;
  return 0;
}
