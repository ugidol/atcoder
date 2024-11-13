#include <bits/stdc++.h>
using namespace std;
typedef struct _data{
	long x;
	long a;
} DATA;

/*
 * 等差数列の和を求める関数
 * a : 初項
 * d : 公差
 * n : 項数
 */
long sum_of_ap(long a, long d, long n){
	return ( n * ( 2 * a + ( n - 1 ) * d ) ) / 2 ;
}
int main(void){
	int N,M; // N : マスの数, M : 石のあるマスの数
	cin >> N >> M;
	vector<DATA> vec(M+1);
	for(int i=0;i<M;i++){
		cin >> vec[i].x; // X[i] : 石の入っているマスの番号
	}
	for(int i=0;i<M;i++){
		cin >> vec[i].a; // A[i] : X[i]のマスに入っている石の数
	}
	// 番兵
	vec[M] = {N+1,0};

	// マスの番号の昇順でソート
	sort(vec.begin(), vec.end(), [](const DATA& left, const DATA& right){
		return left.x < right.x ;
	});

	long ans = 0;
	for(int i=0;i<M;i++){
		long len = vec[i+1].x - vec[i].x; // 現在のマスから次のマスまでの距離

		// 石の数が足りない場合の考慮
		if ( vec[i].a < len ) {
			ans = -1;
			break;
		}

		// len個のマスに石を１個ずつ入れる為の操作回数
		long v1 = sum_of_ap(0, 1, len);
		// num : 残った石の数
		long num = vec[i].a - len ;
		// v2 : 残った石をX[i+1]に移動させるのに必要な操作回数
		long v2 = len * num;
		// 操作回数は v1 + v2
		ans += ( v1 + v2 );
		// X[i+1]に石が移動するので石の数を+numする
		vec[i+1].a += num;
	}

	// 石の数が余った場合の考慮
	if ( vec[M].a > 0 ) {
		ans = -1;
	}

	cout << ans << endl;
	return 0;
}
