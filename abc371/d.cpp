#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	vector<long> X(N+2);
	X[0] = -1*((long)1e9+1);
	for(int i=1;i<=N;i++){
		cin >> X[i];
	}
	X[N+1] = (long)1e9+1;
	vector<long> P(N+2);
	vector<long> sum(N+2);
	P[0] = 0;
	sum[0] = 0;
	for(int i=1;i<=N;i++){
		cin >> P[i];
		sum[i] = sum[i-1] + P[i];
	}
	P[N+1] = 0;
	sum[N+1] = sum[N];
	int Q;
	cin >> Q;
	for(int i=0;i<Q;i++){
		long L,R;
		cin >> L >> R;
		size_t l = 0;
		{
			auto itr = lower_bound(X.begin(),X.end(),L);
			if ( itr != X.begin() ){
				itr--;
			}
			l = distance(X.begin(), itr);
		}
		size_t r = 0;
		{
			auto itr = lower_bound(X.begin(),X.end(),R);
			if ( R < *itr ) {
				itr--;
			}
			r = distance(X.begin(), itr);
		}
#ifdef DEBUG
		fprintf(stderr,"LR={%ld,%ld},lr=[%ld,%ld]\n",L,R,l,r);
#endif
		long ans = sum[r] - sum[l];
		cout << ans << endl;
	}
	return 0;
}
