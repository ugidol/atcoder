#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,T,P;
	cin >> N >> T >> P;
	vector<int> L(N);
	for(int i=0;i<N;i++){
		cin >> L[i];
	}
	int ans = 0;
	for(int d=0;d<=T;d++){
		int p = 0;
		for(int i=0;i<N;i++){
			if ( L[i] + d >= T ) {
				p += 1;
			}
		}
		if ( p >= P ) {
			ans = d;
			break;
		}
	}
	cout << ans << endl;
  return 0;
}
