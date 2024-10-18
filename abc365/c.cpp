#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	long M;
	cin >> N >> M;
	vector<int> A(N);
	for(int i=0;i<N;i++){
		cin >> A[i];
	}
	// Aの合計
	long sum = std::accumulate(A.begin(), A.end(), 0l);
	if ( sum <= M ) {
		cout << "infinite" << endl;
		return 0;
	}
	// Aの最大値
	long max = *std::max_element(A.begin(), A.end());
	// 条件を判定するLamda式
	function<bool(int)> f = [&](int x){
		long v = 0;
		for(int i=0;i<N;i++){
			v += std::min(x,A[i]);
		}
		return v <= M;
	};
	// 二分探索
	int  left = 1;
	int right = max;
	while(abs(left-right)>1){
		int mid = ( left + right ) / 2 ;
		if ( f(mid) ) {
			left = mid;
		}
		else {
			right = mid;
		}
	}
	cout << left << endl;
	return 0;
}
