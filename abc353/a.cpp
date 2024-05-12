#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	vector<int> H(N);
	for(int i=0;i<N;++i){
		cin >> H[i];
	}
	int ans = -1;
	for(int i=1;i<N;++i){
		if ( H[i] > H[0] ) {
			ans = i+1;
			break;
		}
	}
	cout << ans << endl;
  return 0;
}
