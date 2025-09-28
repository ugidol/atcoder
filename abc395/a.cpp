#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	vector<int> A(N);
	for(int i=0;i<N;i++){
		cin >> A[i];
	}
	string ans = "Yes";
	for(int i=1;i<N;i++){
		if ( A[i-1] >= A[i] ) {
			ans = "No";
		}
	}
	cout << ans << endl;
	return 0;
}
