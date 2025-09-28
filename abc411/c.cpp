#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N ;
	vector<bool> color(N);
	int Q;
	int ans = 0;
	cin >> Q;
	for(int i=0;i<Q;i++){
		int q;
		cin >> q;
		q -= 1;
		if ( color[q] ) {
			/* 黒→白になった時 */
			color[q] = false;
			/* 左右が両方とも黒だったら */
			if ( ( q > 0 && color[q-1] ) && ( q < N-1 && color[q+1] ) ) {
				ans += 1;
			}
			else {
				if ( q > 0 && color[q-1] ) {
				}
				else if ( q < N-1 && color[q+1] ) {
				}
				else {
					ans -= 1;
				}
			}
		}
		else {
			/* 白→黒になった時 */
			color[q] = true;
			/* 左右が両方とも黒だったら */
			if ( ( q > 0 && color[q-1] ) && ( q < N-1 && color[q+1] ) ) {
				ans -= 1;
			}
			else {
				if ( q > 0 && color[q-1] ) {
				}
				else if ( q < N-1 && color[q+1] ) {
				}
				else {
					ans += 1;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}
