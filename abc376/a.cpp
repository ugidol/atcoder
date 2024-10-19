#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,C;
	cin >> N >> C;
	vector<int> T(N);
	for(int i=0;i<N;i++){
		cin >> T[i];
	}
	int ans = 0;
	int prev = 0;
	for(int i=0;i<N;i++){
		if ( i != 0 && T[i] - prev < C ) {
			continue;
		}
		ans += 1;
		prev = T[i];
	}
	cout << ans << endl;
	return 0;
}
