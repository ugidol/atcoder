#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	vector<long> A(N);
	for(int i=0;i<N;i++){
		cin >> A[i];
	}
	map<long,long> cmb;
	long sum_of_cmb = 0;
	map<long,long> cnt;
	long sum_of_cnt = 0;
	for(int i=N-1;i>=N-2;i--){
		cnt[ A[i] ] += 1;
		sum_of_cnt += 1;
		long v = ( cnt[ A[i] ] * ( cnt[ A[i] ] - 1 ) ) / 2 ;
		sum_of_cmb -= cmb[ A[i] ]; 
		cmb[ A[i] ] = v;
		sum_of_cmb += v;
	}
	//
	long ans = 0;
	for(int i=(N-3);i>=0;i--){
		long v = A[i];
		long v1 = sum_of_cmb - cmb[v];
		long v2 = cnt[v] * (sum_of_cnt - cnt[v]);
		ans += ( v1 + v2 );
		//
		cnt[ A[i] ] += 1;
		sum_of_cnt += 1;
		{
			long v = ( cnt[ A[i] ] * ( cnt[ A[i] ] - 1 ) ) / 2 ;
			sum_of_cmb -= cmb[ A[i] ]; 
			cmb[ A[i] ] = v;
			sum_of_cmb += v;
		}
	}
	cout << ans << endl;
	return 0;
}
