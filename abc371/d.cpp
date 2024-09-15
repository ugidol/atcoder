#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main(void){
	// 入力
	int N;
	cin >> N;
	// Xはlower_bound()するから、
	// 最小値と最大値の番兵を入れておく
	vector<long long> X(N+2);
	X[0]   = (long long)-1e9-1; // 最小値の番兵
	X[N+1] = (long long) 1e9+1; // 最大値の番兵
	for(int i=1;i<=N;i++){
		cin >> X[i];
	}

	// XがN+2なので、
	// Pと累積和用の配列もN+2にしておく
	vector<long long> P(N+2,0);
	vector<long long> sum(N+2,0);
	for(int i=1;i<=N;i++){
		cin >> P[i];
		sum[i] = sum[i-1] + P[i];
	}
	int Q;
	cin >> Q;
	for(int i=0;i<Q;i++){
		long long L,R;
		cin >> L >> R;
		// 累積和は
		// ary[R] - ary[L-1] が基本
		// なので、Lはlower_bound()してイテレータを-1する
		auto itr_l = lower_bound(X.begin(),X.end(),L) - 1;
		size_t l = distance(X.begin(), itr_l);
		// Rはlower_bound()してRよりも大きい値だったらイテレータを-1する...
		// って思ったけどupper_bound()してイテレータを-1するのと同じと思った
		auto itr_r = upper_bound(X.begin(),X.end(),R) - 1;
		size_t r = distance(X.begin(), itr_r);
#ifdef DEBUG
		cerr << "LR={" << L << "," << R << "}"
			<< "lr={" << l << "," << r << "}" << endl;
#endif

		// 累積和の計算
		long long ans = sum[r] - sum[l];
		cout << ans << endl;
	}
	return 0;
}
