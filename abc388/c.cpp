#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	vector<int> A(N);
	vector<int> B(N);
	for(int i=0;i<N;i++){
		cin >> A[i] ;
		B[i] = A[i];
	}
	sort(A.begin(), A.end());
	long ans = 0;
	for(int i=0;i<N;i++){
		int b = B[i];
		auto itr = upper_bound(A.begin(), A.end(), (b/2) );
		long tmp = distance(A.begin(), itr);
		ans += tmp;
	}
	cout << ans << endl;
	return 0;
}
