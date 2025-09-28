#include <bits/stdc++.h>
using namespace std;

int main(void){
	// 定数(10^8 = 1e8)
	const long M = (long)1e8;
	int N;
	cin >> N;
	vector<long> A(N);
	for(int i=0;i<N;i++){
		cin >> A[i];
	}
	//
	long ans = 0;
	for(int i=0;i<N;i++){
		ans += ( A[i] * (N-1) );
	}
	// 
	sort(A.begin(), A.end());
	// ---------------------------------------------------------------------------
	// 尺取法で解く.
	// ---------------------------------------------------------------------------
	function<void(void)> solve1 = [&](void){
		long num = 0; // (x+y)>=1e8になる組み合わせの数
		int right = N;// 右端
		// 左端から順にループ
		for(int i=0;i<N;i++){
			int left  = i;
			while(right>i&&A[left]+A[right-1]>=M){
				right -= 1;
			}
			num += ( N - max(i+1,right) );
		}
		ans -= ( num * M );
	};
	// ---------------------------------------------------------------------------
	// 二分探索で解く.
	// ---------------------------------------------------------------------------
	function<void(void)> solve2 = [&](void){
		long num = 0; // (x+y)>=1e8になる組み合わせの数
		for(int i=0;i<N;i++){
			long left  = i;
			long right = N;
			while(abs(right-left)>1){
				long mid = ( left + right ) / 2;
				if ( A[i]+A[mid]>=M ) {
					right = mid;
				}
				else {
					left = mid;
				}
			}
			num += (N-right);
		}
		ans -= ( num * M);
	};
	solve1();
	cout << ans << endl;
  return 0;
}
