#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,Q;
	cin >> N >> Q;
	int L = 0;
	int R = 1;
	int ans = 0;
	function<int(int)> fL = [&](int dest){
		if ( L == dest ) {
			return 0;
		}
		int l = 0;
		int r = R - L;
		if ( r < 0 ) {
			r += N;
		}
		dest -= L;
		if ( dest < 0 ) {
			dest += N;
		}
		if ( l < dest && dest < r ) {
			return dest;
		}
		else {
			return N - dest;
		}
	};
	function<int(int)> fR = [&](int dest){
		if ( R == dest ) {
			return 0;
		}
		int r = 0;
		int l = L - R ;
		if ( l < 0 ) {
			l += N;
		}
		dest -= R;
		if ( dest < 0 ) {
			dest += N;
		}
		if ( r < dest && dest < l ) {
			return dest;
		}
		else {
			return N - dest;
		}
	};
	for(int i=0;i<Q;i++){
		char H;
		int T;
		cin >> H >> T;
		int tmp = 0;
		if ( H == 'L' ) {
			tmp = fL(T-1);
			ans += tmp;
			L = T-1;
		}
		else {
			tmp = fR(T-1);
			ans += tmp;
			R = T-1;
		}
#ifdef DEBUG
		fprintf(stderr,"%d\n",tmp);
#endif
	}
	cout << ans << endl;
	return 0;
}
