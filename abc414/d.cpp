#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,M;
	cin >> N >> M;
	vector<long> X(N);
	for(int i=0;i<N;i++){
		cin >> X[i];
	}
	std::sort(X.begin(), X.end());
	vector<long> d;
	for(int i=0;i<N-1;i++){
		long v = std::abs(X[i] - X[i+1]);
		d.push_back(v);
	}
	std::sort(d.begin(), d.end(), std::greater<long>());
	/*
	long dn = std::accumulate(d.begin(), d.end(),0);
	long dm = std::accumulate(d.begin(), d.begin() + (M-1) , 0);
	long ans = ( dn - dm ) ;
	*/
	long ans = 0;
	for(int i=(M-1);i<N-1;i++){
		ans += d[i];
	}
	cout << ans << endl;
	return 0;
}
