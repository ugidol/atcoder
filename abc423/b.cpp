#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	vector<int> L(N);
	for(int i=0;i<N;i++){
		cin >> L[i];
	}
	int left = -1;
	for(int i=0;i<N;i++){
		if ( L[i] == 1 ) {
			left = i;
		}
	}
	int right = -1;
	for(int i=(N-1);i>=0;i--){
		if ( L[i] == 1 ) {
			right = i;
		}
	}
	int ans = std::abs(right-left);
	cout << ans << endl;
	return 0;
}
