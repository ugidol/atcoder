#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,M;
	cin >> N >> M ;
	vector<int> H(N);
	for(int i=0;i<N;i++){
		cin >> H[i];
	}
	int ans = 0;
	for(int i=0;i<N;i++){
		M -= H[i];
		if ( M >= 0 ) {
			ans += 1;
		}
		else {
			break;
		}
	}
	cout << ans << endl;
  return 0;
}
