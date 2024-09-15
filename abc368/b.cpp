#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	vector<int> A(N);
	for(int i=0;i<N;i++){
		cin >> A[i];
	}
	function<int(void)> f = [&](void){
		int num = 0;
		for(auto a:A){
			if ( a > 0 ) {
				num += 1;
			}
		}
		return num;
	};
	int ans = 0;
	while(f()>1){
		ans += 1;
		std::sort(A.begin(), A.end(), greater<int>());
		A[0] -= 1;
		A[1] -= 1;
	}
	cout << ans << endl;
	return 0;
}
