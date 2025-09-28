#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	int S;
	cin >> S;
	vector<int> T(N+1);
	T[0] = 0;
	for(int i=0;i<N;i++){
		cin >> T[i+1];
	}
	string ans = "Yes";
	for(int i=1;i<=N;i++){
		if ( T[i] - T[i-1] > S ) {
			ans = "No";
		}
	}
	cout << ans << endl;
	return 0;
}
