#include <bits/stdc++.h>
using namespace std;

long pow(long base,long x){
	long v = 1;
	for(int i=0;i<x;i++){
		v *= base;
	}
	return v;
}

int main(void){
	int N;
	cin >> N;
	vector<long> A(N);
	for(int i=0;i<N;i++){
		cin >> A[i];
	}
	//
	long ans = 0;
	for(int i=0;i<N;i++){
		ans += A[i];
	}
	ans *= (N-1);
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
			right = max(right,i+1);
			while(left<right-1&&A[left]+A[right-1]>=(long)1e8){
				right -= 1;
			}
			num += ( N - right );
		}
		ans -= ( num * (long)1e8 );
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
				if ( A[i]+A[mid]>=(long)1e8 ) {
					right = mid;
				}
				else {
					left = mid;
				}
			}
			num += (N-right);
		}
		ans -= ( num * (long)1e8 );
	};
	solve1();
	cout << ans << endl;
  return 0;
}
