#include <bits/stdc++.h>
using namespace std;
int main(void){
	// N : 休憩所の個数
	// M : 休憩所sから休憩所tまでの最小の歩数はMの倍数
	int N,M;
	cin >> N >> M;
	// A[i] : 休憩所iから休憩所i+1まで歩くのに必要な歩数
	vector<int> A(N);
	for(int i=0;i<N;++i){
		cin >> A[i];
	}
	// 累積和の配列
	// A[N-1] から A[N-2]まで歩く場合を考慮して2N,
	vector<long> sum(2*N+1,0);
	for(int i=1;i<(int)sum.size();i++){
		sum[i] = sum[i-1] + A[i%N];
	}
	// 累積和の各要素をmod M でグルーピング
	vector<vector<long>> mod(M,vector<long>(0));
	for(int i=0;i<(int)sum.size();i++){
		long m = sum[i] % M;
		mod[m].push_back(sum[i]);
	}
	long ans = 0;
	for(int i=1;i<=N;i++){
		// 休憩所sでの累積和の値
		long s = sum[i];
		// 休憩所を1周するのに必要な歩数
		long r = sum[N];

		// mod M が同じであれば、Mの倍数の歩数で移動可能な休憩所
		long m = s % M;
		vector<long> &vec = mod[m];
		// 休憩所s != 休憩所t なので、1周して同じ休憩所に戻ることはないので
		// 自分自身を除いた範囲で探索する必要がある
		// sからスタートして、s+r(1周分)より小さい歩数の範囲で行ける休憩所を探索
		auto itr_l = lower_bound(vec.begin(), vec.end(),s);
		auto itr_r = lower_bound(vec.begin(), vec.end(),s+r)-1;
		// itr_l(最初)とitr_r(最後)のdistanceが、休憩所の数
		int num = distance(itr_l,itr_r);
		ans += num;
	}
	cout << ans << endl;
	return 0;
}
