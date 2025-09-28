#include <bits/stdc++.h>
using namespace std;
int main(void){
	int Q;
	cin >> Q;
	vector<long> c(Q,0);
	vector<long> x(Q,0);
	int idx = 0;
	for(int i=0;i<Q;i++){
		int q;
		cin >> q;
		if ( q == 1 ) {
			long cc,xx;
			cin >> cc >> xx;
			c[i] = cc;
			x[i] = xx;
		}
		else {
			long k;
			cin >> k;
			long ans = 0;
			while(k>0){
				if ( k >= c[idx] ) {
					k -= c[idx];
					ans += c[idx] * x[idx] ;
					idx += 1;
				}
				else {
					c[idx] -= k;
					ans += k * x[idx];
					k = 0;
				}
			}
			cout << ans << endl;
		}
	}
	return 0;
}
