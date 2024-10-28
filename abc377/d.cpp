#include <bits/stdc++.h>
using namespace std;

int main(void){
	int N,M;
	cin >> N >> M;
	vector<int> max(M+1);
	for(int i=0;i<N;i++){
		int l,r;
		cin >> l >> r;
		max[r] = std::max(max[r],l);
	}
	long ans = 0;
	int l=1;
	for(int r=1;r<=M;r++){
		while( l <= max[r] ) {
			l += 1;
		}
		ans += ( r-l+1 );
	}
	cout << ans << endl;
	return 0;
}
