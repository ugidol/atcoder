#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,R;
	cin >> N >> R ;
	vector<int> L(N);
	for(int i=0;i<N;i++){
		cin >> L[i];
	}
	int left = 0;
	for(int i=0;i<N;i++){
		if ( L[i] == 0 ) {
			left = i;
			break;
		}
	}
	left = std::min(left,R);
	int right = N-1;
	for(int i=right;i>=0;i--){
		if ( L[i] == 0 ) {
			right = i;
			break;
		}
	}
	int ans = 0;
	for(int i=R;i>left;i++){
		if ( L[i-1]==0 ) {
			L[i-1] = 0;
			ans += 1;
		}
	}
	return 0;
}
