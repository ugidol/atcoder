#include <bits/stdc++.h>
using namespace std;
int main(void){
	vector<int> A(3);
	for(int i=0;i<3;i++){
		cin >> A[i];
	}
	string ans = "No";
	if ( A[0] * A[1] == A[2] ) {
		ans = "Yes";
	}
	else if ( A[0] * A[2] == A[1] ) {
		ans = "Yes";
	}
	else if ( A[1] * A[2] == A[0] ) {
		ans = "Yes";
	}
	cout << ans << endl;
	return 0;
}
