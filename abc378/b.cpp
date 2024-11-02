#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	vector<pair<int,int>> vec(N);
	for(int i=0;i<N;i++){
		int q,r;
		cin >> q >> r;
		vec[i] = make_pair(q,r);
	}
	int Q;
	cin >> Q;
	vector<int> ans(Q);
	for(int i=0;i<Q;i++){
		int t,d;
		cin >> t >> d;
		int q = vec[t-1].first;
		int r = vec[t-1].second;
		if ( d % q <= r ) {
			ans[i] = ( d / q ) * q + r;
		}
		else {
			ans[i] = ( ( d + ( q - 1 ) ) / q ) * q + r;
		}
	}
	for(auto itr:ans){
		cout << itr << endl;
	}
	return 0;
}
